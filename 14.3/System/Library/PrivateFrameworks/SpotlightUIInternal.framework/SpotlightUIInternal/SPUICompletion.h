@class NSString, SFSearchResult, SFCardSection, NSAttributedString, SFImage;

@interface SPUICompletion : NSObject

@property (readonly, nonatomic) NSString *typedString;
@property (readonly, nonatomic) SFSearchResult *result;
@property (readonly, nonatomic) SFCardSection *cardSection;
@property (retain, nonatomic) NSAttributedString *completionString;
@property (retain, nonatomic) NSString *extensionString;
@property (retain, nonatomic) SFImage *image;
@property (retain, nonatomic) NSString *bridgeString;
@property (readonly, nonatomic) NSString *copyableString;
@property (readonly, nonatomic) BOOL completionResultIsPotentiallyPunchout;

+ (BOOL)supportsResult:(id)a0 cardSection:(id)a1;
+ (id)initWithTypedString:(id)a0 result:(id)a1 cardSection:(id)a2;
+ (BOOL)stringMatchesWritingDirection:(id)a0;
+ (id)localizedNameForBundleIdentifier:(id)a0;
+ (id)openString;

- (void)updateFields;
- (void).cxx_destruct;
- (id)description;
- (id)prefixMatchExtensionString;
- (id)initWithTypedString:(id)a0 result:(id)a1 cardSection:(id)a2;
- (id)completionStringToMatch;
- (id)completionStringWithString:(id)a0;
- (id)nonPrefixMatchExtensionString;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfStringWithTypedString:(id)a0;

@end
