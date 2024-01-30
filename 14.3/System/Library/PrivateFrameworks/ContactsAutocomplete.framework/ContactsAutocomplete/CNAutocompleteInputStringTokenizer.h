@class CNFuture;

@interface CNAutocompleteInputStringTokenizer : NSObject

@property (retain) CNFuture *nameStringTokenizer;

+ (id)tokensFromString:(id)a0;
+ (id)lazyNameStringTokenizerWithLocale:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithLocale:(id)a0;
- (id)tokensFromString:(id)a0;
- (id /* block */)expandCJKNames;

@end
