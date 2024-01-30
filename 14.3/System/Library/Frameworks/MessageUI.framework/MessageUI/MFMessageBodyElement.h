@class NSArray, NSString, MFMessageBodyParser;

@interface MFMessageBodyElement : NSObject <MFMessageBodyElement_Private> {
    NSArray *_nodes;
    unsigned long long _quoteLevel;
    unsigned long long _externalRetainCount;
    int _validAttributes;
    int _attributes;
}

@property (weak, nonatomic) MFMessageBodyParser *parser;
@property (retain, nonatomic) NSArray *nodes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)quoteLevel;
- (id)copyConsumableNodesAndAppendInnerTextToStringAccumulator:(id)a0;
- (id)init;
- (void)releaseExternally;
- (int)valueForAttributes:(int)a0;
- (void)reset;
- (id)retainExternally;
- (void)dealloc;
- (BOOL)isExternallyRetained;
- (BOOL)_hasValueForAttributes:(int)a0;
- (void)_setValue:(int)a0 forAttributes:(int)a1;
- (unsigned long long)getQuoteLevel;

@end
