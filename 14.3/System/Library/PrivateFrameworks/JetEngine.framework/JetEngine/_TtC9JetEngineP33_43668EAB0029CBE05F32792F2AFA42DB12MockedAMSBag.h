@class NSString, NSDate;

@interface _TtC9JetEngineP33_43668EAB0029CBE05F32792F2AFA42DB12MockedAMSBag : AMSSnapshotBag {
    void /* unknown type, empty encoding */ bagProfile;
    void /* unknown type, empty encoding */ stubs;
}

@property (nonatomic, readonly) BOOL expired;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly) NSString *profile;
@property (nonatomic, readonly) NSString *profileVersion;

- (id)init;
- (BOOL)isExpired;
- (void).cxx_destruct;
- (void)createSnapshotWithCompletion:(id /* block */)a0;
- (id)stringForKey:(id)a0;
- (id)boolForKey:(id)a0;
- (id)integerForKey:(id)a0;
- (id)dictionaryForKey:(id)a0;
- (id)URLForKey:(id)a0;
- (id)arrayForKey:(id)a0;
- (id)doubleForKey:(id)a0;

@end
