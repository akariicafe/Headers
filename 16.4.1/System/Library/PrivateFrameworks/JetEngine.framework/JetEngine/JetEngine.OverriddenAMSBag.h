@class NSString, NSDate;
@protocol AMSBagProtocol;

@interface JetEngine.OverriddenAMSBag : AMSSnapshotBag <JetEngine.DeprecatedOverriddenAMSBag> {
    void /* unknown type, empty encoding */ backing;
    void /* unknown type, empty encoding */ overrides;
}

@property (nonatomic, readonly) BOOL expired;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly) NSString *profile;
@property (nonatomic, readonly) NSString *profileVersion;
@property (nonatomic, readonly) id<AMSBagProtocol> replacingSnapshotIfNeeded;

- (id)initWithData:(id)a0;
- (void)createSnapshotWithCompletion:(id /* block */)a0;
- (void)forwardSnapshotBagExpiredValueAccessed:(id)a0;
- (id)arrayForKey:(id)a0;
- (id)dictionaryForKey:(id)a0;
- (id)integerForKey:(id)a0;
- (id)boolForKey:(id)a0;
- (id)doubleForKey:(id)a0;
- (BOOL)isExpired;
- (id)URLForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
