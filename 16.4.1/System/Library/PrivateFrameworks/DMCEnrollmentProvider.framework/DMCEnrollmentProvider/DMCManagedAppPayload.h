@class NSString;

@interface DMCManagedAppPayload : MCPayload

@property (retain, nonatomic) NSString *managedAppID;

+ (id)localizedPluralForm;
+ (id)typeStrings;
+ (id)localizedSingularForm;

- (id)title;
- (void).cxx_destruct;
- (id)initWithManagedAppID:(id)a0 profile:(id)a1;

@end
