@class NSData, ICSTokenizer;
@protocol ICSUIDGenerator;

@interface ICSParser : NSObject {
    unsigned long long _options;
    NSData *_data;
    id<ICSUIDGenerator> _uidGenerator;
}

@property (readonly, nonatomic) ICSTokenizer *lexer;

+ (id)entitiesFromNSData:(id)a0 options:(unsigned long long)a1;

- (id)initWithData:(id)a0 options:(unsigned long long)a1;
- (void).cxx_destruct;
- (BOOL)_parseComponent:(id)a0;
- (void)_parseComponent:(id)a0 depth:(unsigned long long)a1 fatalError:(BOOL *)a2;
- (BOOL)createPropertyType:(int)a0 component:(id)a1 withName:(id)a2 fatalError:(BOOL *)a3;
- (id)makeComponent:(const char *)a0;
- (id)parseData;
- (BOOL)parseParameter:(id)a0 fatalError:(BOOL *)a1;
- (BOOL)parseProperty:(id)a0 fatalError:(BOOL *)a1;

@end
