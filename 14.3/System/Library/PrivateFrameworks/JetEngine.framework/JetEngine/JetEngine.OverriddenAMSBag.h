@class NSString, NSDate;

@interface JetEngine.OverriddenAMSBag : AMSSnapshotBag {
    void /* unknown type, empty encoding */ backing;
    void /* unknown type, empty encoding */ overrides;
}

@property (nonatomic, readonly) BOOL expired;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly) NSString *profile;
@property (nonatomic, readonly) NSString *profileVersion;

- (id)init;
- (BOOL)isExpired;
- (void).cxx_destruct;
- (void)createSnapshotWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (id)stringForKey:(id)a0;
- (id)boolForKey:(id)a0;
- (id)integerForKey:(id)a0;
- (id)dictionaryForKey:(id)a0;
- (id)URLForKey:(id)a0;
- (void)forwardSnapshotBagExpiredValueAccessed:(id)a0;
- (id)arrayForKey:(id)a0;
- (id)doubleForKey:(id)a0;

@end
