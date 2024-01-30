@class NSArray;

@interface SymbolValidator : YQLRequest {
    NSArray *_symbols;
}

@property (weak, nonatomic) id delegate;

- (id)initWithDelegate:(id)a0;
- (void)parseData:(id)a0;
- (void).cxx_destruct;
- (void)failWithError:(id)a0;
- (void)didParseData;
- (void)validateSymbol:(id)a0 withMaxResults:(int)a1;

@end
