@interface TBError : NSError

+ (id)fetchMissingParametersErrorWithUserInfo:(id)a0;
+ (id)responseErrorWithUserInfo:(id)a0;
+ (id)fetchUnsupportedErrorWithUserInfo:(id)a0;

- (id)initWithType:(long long)a0 userInfo:(id)a1;

@end
