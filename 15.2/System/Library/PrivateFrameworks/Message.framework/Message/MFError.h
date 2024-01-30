@class NSMutableDictionary;

@interface MFError : NSError {
    NSMutableDictionary *_moreUserInfo;
}

+ (id)errorWithDomain:(id)a0 code:(long long)a1 localizedDescription:(id)a2 title:(id)a3 userInfo:(id)a4;
+ (id)errorWithDomain:(id)a0 code:(long long)a1 localizedDescription:(id)a2;
+ (id)errorWithException:(id)a0;

- (id)localizedDescription;
- (void)setLocalizedDescription:(id)a0;
- (id)userInfo;
- (id)recoveryAttempter;
- (void)setUserInfoObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)setShortDescription:(id)a0;
- (id)initWithDomain:(id)a0 code:(long long)a1 userInfo:(id)a2;
- (id)mf_moreInfo;
- (id)mf_shortDescription;
- (void)setMoreInfo:(id)a0;
- (void)useGenericDescription:(id)a0;

@end
