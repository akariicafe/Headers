@class NSError, NSMutableArray;

@interface MFMessageBodyParser : MFMessageBodyParserObject {
    NSMutableArray *_subparsers;
    NSMutableArray *_elementPool;
    NSMutableArray *_paragraphNodes;
    id /* block */ _foundMessageBodyElementBlock;
    NSError *_parserError;
    struct __CFArray { } *_nodesStackCache;
    struct __CFDictionary { } *_nodesLevelCache;
    struct __CFDictionary { } *_nodesQuoteLevelCache;
}

@property (class, readonly, nonatomic) BOOL cacheRetainsNodes;

@property (nonatomic) unsigned long long options;

+ (BOOL)isLinebreakImpliedBeforeTagName:(id)a0;
+ (BOOL)isLinebreakImpliedAfterTagName:(id)a0;

- (id)init;
- (id)parserError;
- (void)dealloc;
- (BOOL)parse;
- (void)enqueueParagraphNode:(id)a0 withTagName:(id)a1;
- (void)flushParagraphNodes;
- (void)willBeginParsing;
- (BOOL)shouldProceedParsing;
- (BOOL)isLandmarkTagName:(id)a0;
- (void)didFindError:(id)a0;
- (BOOL)shouldIgnoreTagWithTagName:(id)a0;
- (void)didFinishParsing;
- (int)messageBodyStringAccumulatorDefaultOptions;
- (Class)messageBodyElementClass;
- (void)copyBlocks;
- (Class)messageBodyStringAccumulatorClass;
- (id)getAvailableMessageBodyElement;
- (void)didFindBodyElement:(id)a0;
- (void)getLevel:(long long *)a0 quoteLevel:(long long *)a1 forBodyNode:(id)a2;
- (id)newStringAccumulatorWithOptions:(int)a0 lengthLimit:(unsigned long long)a1;
- (void)setFoundMessageBodyElementBlock:(id /* block */)a0;
- (void)addSubparser:(id)a0;
- (void)removeSubparser:(id)a0;
- (unsigned long long)quoteLevelForBodyNode:(id)a0;

@end
