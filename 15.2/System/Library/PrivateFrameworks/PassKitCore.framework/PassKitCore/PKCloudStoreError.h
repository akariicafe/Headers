@interface PKCloudStoreError : NSError

+ (id)errorWithDomain:(id)a0 code:(long long)a1 userInfo:(id)a2;
+ (BOOL)_isCloudKitErrorDomain:(id)a0;

- (BOOL)isUnrecoverableDecryptionError;
- (id)allZoneIDs;
- (id)initWithError:(id)a0;
- (BOOL)isUnknownItemError;
- (BOOL)isManateeNotAvailableError;
- (id)_partialErrorsDictionary;
- (BOOL)isPartialError;
- (id)errorForPartialErrorWithObject:(id)a0;
- (BOOL)isKeychainSyncingInProgress;
- (id)_objectsOfClassTypeFromPartialErrors:(Class)a0;
- (BOOL)isNetworkUnavailable;
- (id)_allPartialErrors;
- (BOOL)isPCSError;
- (BOOL)isChangeTokenExpired;
- (BOOL)isZoneNotFoundError;
- (id)initWithDomain:(id)a0 code:(long long)a1 userInfo:(id)a2;
- (BOOL)isParticipantMayNeedVerificationError;
- (BOOL)isInitializationTimeOutError;
- (long long)_code;

@end
