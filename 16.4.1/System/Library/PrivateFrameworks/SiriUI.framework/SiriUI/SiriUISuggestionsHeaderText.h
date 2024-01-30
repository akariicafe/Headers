@class NSString, NSAttributedString;

@interface SiriUISuggestionsHeaderText : NSObject <NSCopying>

@property (copy, nonatomic) NSString *regularString;
@property (copy, nonatomic) NSString *compactString;
@property (nonatomic) long long textAlignment;
@property (readonly, nonatomic) NSAttributedString *attributedStringForMainScreenTraitCollection;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_attributedStringWithString:(id)a0;
- (id)initWithRegularString:(id)a0 compactString:(id)a1;

@end
