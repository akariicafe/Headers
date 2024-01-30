@class NSString, NSDictionary, NSCountedSet;

@interface PXAttributedStringHTMLParser : NSObject

@property (readonly, copy, nonatomic) NSString *_htmlString;
@property (readonly, copy, nonatomic) NSDictionary *_defaultAttributes;
@property (readonly, nonatomic) NSCountedSet *_currentMarkupElements;
@property (nonatomic, setter=_setCurrentTraits:) unsigned int _currentTraits;
@property (copy, nonatomic, setter=_setCurrentAttributes:) NSDictionary *_currentAttributes;
@property (copy, nonatomic) NSDictionary *emphasizedAttributes;
@property (copy, nonatomic) NSDictionary *italicizedAttributes;
@property (copy, nonatomic) id /* block */ parsedAttributedStringBlock;
@property (copy, nonatomic) id /* block */ parsedErrorBlock;

+ (id)stringByConvertingToHTML:(id)a0;

- (void)parse;
- (id)init;
- (void).cxx_destruct;
- (id)initWithHTMLString:(id)a0 defaultAttributes:(id)a1;
- (void)_updateCurrentTraits;

@end
