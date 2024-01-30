@interface TZPreferencesController : NSObject

@property (readonly, nonatomic) BOOL updatesEnabled;
@property (readonly, nonatomic) long long loggingLevel;

+ (id)sharedPreferencesController;

- (void)preferencesChanged:(id)a0;
- (id)init;

@end
