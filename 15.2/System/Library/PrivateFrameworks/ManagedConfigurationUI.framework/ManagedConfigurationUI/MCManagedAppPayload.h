@class NSString;

@interface MCManagedAppPayload : MCPayload

@property (retain, nonatomic) NSString *managedAppID;

+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;

- (id)title;
- (void).cxx_destruct;
- (id)initWithManagedAppID:(id)a0 profile:(id)a1;

@end
