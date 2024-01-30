@class NSArray;
@protocol SYChangeSerializer;

@interface _SYLazyChangeArray : NSArray {
    NSArray *_source;
    NSArray *_types;
    id<SYChangeSerializer> _decoder;
    BOOL _isSYObjectDataArray;
}

@property (nonatomic) long long compatibilityVersion;

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)initWithSYObjectDataArray:(id)a0 typeArray:(id)a1 decoder:(id)a2;
- (id)initWithSourceArray:(id)a0 decoder:(id)a1;

@end
