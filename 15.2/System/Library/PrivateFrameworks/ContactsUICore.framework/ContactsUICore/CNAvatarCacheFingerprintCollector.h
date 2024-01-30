@class NSArray, NSString, NSMutableOrderedSet;

@interface CNAvatarCacheFingerprintCollector : NSObject <CNChangeHistoryEventVisitor> {
    NSMutableOrderedSet *_fingerprints;
}

@property (readonly, copy, nonatomic) NSArray *fingerprintsOfAffectedContacts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)visitDropEverythingEvent:(id)a0;
- (void)visitDeleteContactEvent:(id)a0;
- (void)visitAddContactEvent:(id)a0;
- (void)visitUpdateContactEvent:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
