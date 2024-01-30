@class NSDictionary, NSString;

@interface PXMiniHTMLParser : NSObject

@property (class, readonly, nonatomic) NSDictionary *charactersForEntityNames;

@property (readonly, nonatomic) NSString *_string;
@property (copy, nonatomic) id /* block */ parsedCharactersBlock;
@property (copy, nonatomic) id /* block */ parsedMarkupElementStartBlock;
@property (copy, nonatomic) id /* block */ parsedMarkupElementEndBlock;
@property (copy, nonatomic) id /* block */ parsedErrorBlock;

+ (id)stringByConvertingToHTML:(id)a0;

- (id)initWithString:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)parse;

@end
