@class ECMessageBodyParser, NSArray, NSString;

@interface ECMessageBodyElement : NSObject <ECMessageBodyElement_Private> {
    NSArray *_nodes;
    unsigned long long _quoteLevel;
    unsigned long long _externalRetainCount;
    unsigned long long _validAttributes;
    unsigned long long _attributes;
}

@property (weak, nonatomic) ECMessageBodyParser *parser;
@property (retain, nonatomic) NSArray *nodes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)_hasValueForAttributes:(unsigned long long)a0;
- (void)_setValue:(unsigned long long)a0 forAttributes:(unsigned long long)a1;
- (id)copyConsumableNodesAndAppendInnerTextToStringAccumulator:(id)a0;
- (unsigned long long)getQuoteLevel;
- (BOOL)isExternallyRetained;
- (unsigned long long)quoteLevel;
- (void)releaseExternally;
- (id)retainExternally;
- (unsigned long long)valueForAttributes:(unsigned long long)a0;

@end
