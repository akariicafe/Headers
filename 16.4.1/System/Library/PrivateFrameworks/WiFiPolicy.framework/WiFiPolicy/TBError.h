@interface TBError : NSError

+ (id)responseErrorWithUserInfo:(id)a0;
+ (id)fetchUnsupportedErrorWithUserInfo:(id)a0;
+ (id)fetchMissingParametersErrorWithUserInfo:(id)a0;

- (id)initWithType:(long long)a0 userInfo:(id)a1;

@end
