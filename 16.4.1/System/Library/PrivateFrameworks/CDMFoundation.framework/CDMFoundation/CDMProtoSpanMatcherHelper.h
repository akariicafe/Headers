@interface CDMProtoSpanMatcherHelper : NSObject

+ (id /* block */)ascendingStartIndexComparator;
+ (id)buildMatchingSpanProtoWithLabel:(id)a0 inputStringForDebug:(id)a1 startTokenIndex:(unsigned int)a2 endTokenIndex:(unsigned int)a3 spanMatcherName:(int)a4;
+ (id)buildMatchingSpanProtoWithLabel:(id)a0 inputStringForDebug:(id)a1 startTokenIndex:(unsigned int)a2 endTokenIndex:(unsigned int)a3 startCharIndex:(unsigned int)a4 endCharIndex:(unsigned int)a5 spanMatcherName:(int)a6;
+ (id)buildUsoIdentifier:(id)a0 semantic:(id)a1 nodeIndex:(int)a2;
+ (id)buildUtteranceAlignments:(unsigned int)a0 endCharIndex:(unsigned int)a1 nodeIndex:(int)a2;
+ (id /* block */)descendingLengthComparator;
+ (void)enumerateTokenChain:(id)a0 useNormalizedValues:(BOOL)a1 withCallback:(id /* block */)a2;
+ (BOOL)isTrailingSpanAdjacent:(id)a0 secondSpan:(id)a1 tokenChain:(id)a2;
+ (id /* block */)voiceCommandSpanComparator;

@end
