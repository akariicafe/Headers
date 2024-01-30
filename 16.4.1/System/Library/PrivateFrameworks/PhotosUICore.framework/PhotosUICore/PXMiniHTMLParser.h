@class NSDictionary, NSString;

@interface PXMiniHTMLParser : NSObject

@property (class, readonly, nonatomic) NSDictionary *charactersForEntityNames;

@property (readonly, nonatomic) NSString *_string;
@property (copy, nonatomic) id /* block */ parsedCharactersBlock;
@property (copy, nonatomic) id /* block */ parsedMarkupElementStartBlock;
@property (copy, nonatomic) id /* block */ parsedMarkupElementEndBlock;
@property (copy, nonatomic) id /* block */ parsedErrorBlock;

+ (id)stringByConvertingToHTML:(id)a0;

- (void)parse;
- (id)initWithString:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
