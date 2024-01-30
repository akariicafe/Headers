@class NSData, ICSTokenizer;

@interface ICSParser : NSObject {
    unsigned long long _options;
    NSData *_data;
}

@property (readonly, nonatomic) ICSTokenizer *lexer;

+ (id)entitiesFromNSData:(id)a0 options:(unsigned long long)a1;

- (id)initWithData:(id)a0 options:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)parseParameter:(id)a0;
- (BOOL)createPropertyType:(int)a0 component:(id)a1 withName:(id)a2;
- (void)_parseComponent:(id)a0 depth:(unsigned long long)a1 fatalError:(BOOL *)a2;
- (id)makeComponent:(const char *)a0;
- (BOOL)parseProperty:(id)a0;
- (void)_parseComponent:(id)a0;
- (id)parseData;

@end
