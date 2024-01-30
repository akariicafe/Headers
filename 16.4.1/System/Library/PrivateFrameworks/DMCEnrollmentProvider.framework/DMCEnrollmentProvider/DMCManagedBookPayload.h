@class MDMBook;

@interface DMCManagedBookPayload : MCPayload

@property (retain, nonatomic) MDMBook *book;

+ (id)localizedPluralForm;
+ (id)typeStrings;
+ (id)localizedSingularForm;

- (id)title;
- (void).cxx_destruct;
- (id)initWithBook:(id)a0;

@end
