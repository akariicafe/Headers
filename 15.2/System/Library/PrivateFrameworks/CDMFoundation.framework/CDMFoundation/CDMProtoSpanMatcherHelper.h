@interface CDMProtoSpanMatcherHelper : NSObject

+ (id)buildMatchingSpanProtoWithLabel:(id)a0 inputStringForDebug:(id)a1 startTokenIndex:(unsigned int)a2 endTokenIndex:(unsigned int)a3 spanMatcherName:(int)a4;
+ (void)enumerateTokenChain:(id)a0 withOptions:(unsigned int)a1 withCallback:(id /* block */)a2;
+ (id)buildMatchingSpanProtoWithLabel:(id)a0 inputStringForDebug:(id)a1 startTokenIndex:(unsigned int)a2 endTokenIndex:(unsigned int)a3 startCharIndex:(unsigned int)a4 endCharIndex:(unsigned int)a5 spanMatcherName:(int)a6;
+ (void)enumerateTokenChain:(id)a0 usingCleanValues:(BOOL)a1 withCallback:(id /* block */)a2;
+ (id /* block */)ascendingStartIndexComparator;
+ (id /* block */)descendingLengthComparator;
+ (id /* block */)voiceCommandSpanComparator;
+ (BOOL)isTrailingSpanAdjacent:(id)a0 secondSpan:(id)a1 tokenChain:(id)a2;

@end
