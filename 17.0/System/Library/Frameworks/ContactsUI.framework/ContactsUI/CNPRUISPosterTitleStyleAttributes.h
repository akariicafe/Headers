@class PRUISPosterTitleStyleAttributes;

@interface CNPRUISPosterTitleStyleAttributes : NSObject

@property (readonly, copy, nonatomic) PRUISPosterTitleStyleAttributes *wrappedPosterTitleStyleAttributes;

+ (id)attributesForCNConfiguration:(id)a0;
+ (id)attributesFromData:(id)a0 error:(out id *)a1;

- (id)titleColor;
- (id)titleFont;
- (unsigned long long)preferredTitleLayout;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)preferredTitleAlignment;
- (id)initWithPosterTitleStyleAttributes:(id)a0;

@end
