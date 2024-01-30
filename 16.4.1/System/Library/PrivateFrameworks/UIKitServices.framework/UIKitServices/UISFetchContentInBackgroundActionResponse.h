@interface UISFetchContentInBackgroundActionResponse : BSActionResponse

+ (id)responseWithResult:(unsigned long long)a0;

- (id)initWithInfo:(id)a0 error:(id)a1;
- (unsigned long long)result;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)initWithBackgroundFetchResult:(unsigned long long)a0;

@end
