@class MCBook;

@interface MCManagedMediaPayload : MCPayload

@property (retain, nonatomic) MCBook *managedBook;

+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;

- (void).cxx_destruct;
- (id)title;
- (id)initWithManagedMedia:(id)a0 profile:(id)a1;

@end
