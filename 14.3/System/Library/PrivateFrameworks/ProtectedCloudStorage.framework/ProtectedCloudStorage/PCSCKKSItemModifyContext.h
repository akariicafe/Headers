@class PCSLockAssertion, NSString, NSData, NSDate, NSObject, PCSMTT;
@protocol OS_os_transaction;

@interface PCSCKKSItemModifyContext : NSObject {
    struct __CFDictionary { } *_rollAttributes;
}

@property (retain) NSObject<OS_os_transaction> *transaction;
@property (retain) PCSLockAssertion *lockAssertion;
@property (retain) id activityAssertion;
@property struct _PCSIdentitySetData { } *set;
@property struct __PCSLogContext { } *log;
@property long long timeoutValue;
@property (retain) NSString *dsid;
@property (retain) NSString *service;
@property struct _PCSIdentityData { } *currentIdentity;
@property (retain) NSData *currentItemReference;
@property (retain) NSData *existingItemReference;
@property (retain) NSData *existingItemSHA1;
@property struct _PCSIdentityData { } *rollIdentity;
@property (retain) NSData *rollItemReference;
@property (retain) NSData *rollItemSHA1;
@property (retain) NSDate *server_NextRollDate;
@property BOOL sync;
@property BOOL roll;
@property int retryLeftCount;
@property (readonly) PCSMTT *mtt;
@property BOOL returnedExistingIdentity;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)resetIdentities;

@end
