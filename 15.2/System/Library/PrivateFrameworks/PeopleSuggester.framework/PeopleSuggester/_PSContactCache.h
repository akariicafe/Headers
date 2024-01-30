@class CNContactStore, NSString, IDSIDQueryController, NSData, NSObject, _PASLock;
@protocol OS_dispatch_queue, NSObject;

@interface _PSContactCache : NSObject <CNChangeHistoryEventVisitor> {
    CNContactStore *_contactStore;
    NSData *_changeHistoryToken;
    id<NSObject> _notificationCenterToken;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    _PASLock *_cachedContactForHandle;
    _PASLock *_cachedFaceTimeableHandleForContactIdentifier;
    IDSIDQueryController *_idsQueryController;
    NSString *_faceTimeServiceName;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)_purge;
- (void)visitDropEverythingEvent:(id)a0;
- (void)visitDeleteContactEvent:(id)a0;
- (void)visitAddContactEvent:(id)a0;
- (void)visitUpdateContactEvent:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)contactKeysToFetch;
- (void)dealloc;
- (id)getContactForHandle:(id)a0 handleType:(long long)a1;
- (id)getMeContact;
- (long long)getFaceTimeIDSStatusForHandle:(id)a0 contactType:(unsigned long long)a1;
- (id)getFaceTimeableHandleForContact:(id)a0 interactionStore:(id)a1;
- (void)syncChangeHistory;
- (void)_setContact:(id)a0 forHandle:(id)a1;
- (void)_setContact:(id)a0;
- (void)_removeAllHandlesForContactIdentifier:(id)a0;
- (id)fetchMeContact;
- (id)_getCachedFaceTimeableHandleForContactIdentifier:(id)a0;
- (void)_setLikelyFaceTimeHandle:(id)a0 forContactIdentifier:(id)a1;
- (id)_getCachedContactForHandle:(id)a0;

@end
