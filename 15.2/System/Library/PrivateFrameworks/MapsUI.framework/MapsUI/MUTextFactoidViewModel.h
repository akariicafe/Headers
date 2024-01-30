@class NSString;

@interface MUTextFactoidViewModel : MUFactoidViewModel {
    NSString *_symbolName;
    NSString *_titleString;
    NSString *_valueString;
}

- (id)symbolName;
- (void).cxx_destruct;
- (id)titleString;
- (id)valueString;
- (id)buildSymbolWithFont:(id)a0;
- (id)initWithTitle:(id)a0 valueString:(id)a1 symbolName:(id)a2;

@end
