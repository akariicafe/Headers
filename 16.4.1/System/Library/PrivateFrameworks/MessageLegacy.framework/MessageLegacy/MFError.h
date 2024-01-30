@class NSMutableDictionary;

@interface MFError : NSError {
    NSMutableDictionary *_moreUserInfo;
}

+ (id)errorWithDomain:(id)a0 code:(long long)a1 localizedDescription:(id)a2;
+ (id)errorWithDomain:(id)a0 code:(long long)a1 localizedDescription:(id)a2 title:(id)a3 userInfo:(id)a4;
+ (id)errorWithException:(id)a0;

- (id)localizedDescription;
- (void)setLocalizedDescription:(id)a0;
- (void)setUserInfoObject:(id)a0 forKey:(id)a1;
- (void)dealloc;
- (id)userInfo;
- (id)initWithDomain:(id)a0 code:(long long)a1 userInfo:(id)a2;
- (id)recoveryAttempter;
- (void)setShortDescription:(id)a0;
- (id)mf_moreInfo;
- (id)mf_shortDescription;
- (void)setMoreInfo:(id)a0;
- (void)useGenericDescription:(id)a0;

@end
