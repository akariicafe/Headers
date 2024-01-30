@class CNFuture;

@interface CNAutocompleteInputStringTokenizer : NSObject

@property (retain) CNFuture *nameStringTokenizer;

+ (id)tokensFromString:(id)a0;
+ (id)lazyNameStringTokenizerWithLocale:(id)a0;

- (id)initWithLocale:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)tokensFromString:(id)a0;
- (id /* block */)expandCJKNames;

@end
