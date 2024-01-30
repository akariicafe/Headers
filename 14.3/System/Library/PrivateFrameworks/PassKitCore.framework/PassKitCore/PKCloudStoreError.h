@interface PKCloudStoreError : NSError

+ (id)errorWithDomain:(id)a0 code:(long long)a1 userInfo:(id)a2;
+ (BOOL)_isCloudKitErrorDomain:(id)a0;

- (long long)_code;
- (id)initWithDomain:(id)a0 code:(long long)a1 userInfo:(id)a2;
- (id)initWithError:(id)a0;
- (BOOL)isPCSError;
- (BOOL)isPartialError;
- (id)_partialErrorsDictionary;
- (id)_allPartialErrors;
- (BOOL)isChangeTokenExpired;
- (BOOL)isZoneNotFoundError;
- (BOOL)isUnrecoverableDecryptionError;
- (BOOL)isManateeNotAvailableError;
- (BOOL)isKeychainSyncingInProgress;
- (id)errorForPartialErrorWithObject:(id)a0;
- (id)_objectsOfClassTypeFromPartialErrors:(Class)a0;
- (BOOL)isNetworkUnavailable;
- (BOOL)isInitializationTimeOutError;
- (BOOL)isUnknownItemError;
- (id)allZoneIDs;

@end
