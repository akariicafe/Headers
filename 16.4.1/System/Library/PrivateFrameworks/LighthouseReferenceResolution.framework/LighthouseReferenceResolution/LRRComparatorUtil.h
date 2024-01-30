@interface LRRComparatorUtil : NSObject

+ (id)buildEdgIdSignature:(id)a0;
+ (BOOL)compareEmbeddingTensor1:(id)a0 withEmbeddingTensor2:(id)a1;
+ (BOOL)compareEntityCandidate1:(id)a0 withEntityCandidate2:(id)a1;
+ (BOOL)compareInternalMDSpanData1:(id)a0 withMDSpanData2:(id)a1;
+ (BOOL)compareInternalMRSpanData1:(id)a0 withMRSpanData2:(id)a1;
+ (BOOL)compareInternalSpanData1:(id)a0 withInternalSpanData2:(id)a1;
+ (BOOL)compareMDMRUsoGraphs:(id)a0 graph2:(id)a1;
+ (BOOL)compareMatchingSpans:(id)a0 span2:(id)a1;
+ (BOOL)compareRRGroupId1:(id)a0 withRRGroupId2:(id)a1;
+ (BOOL)compareSiriCommonStringValue1:(id)a0 withCommonStringValue2:(id)a1;
+ (BOOL)compareToken1:(id)a0 withToken2:(id)a1;
+ (BOOL)compareTokenChain1:(id)a0 withTokenChain2:(id)a1;
+ (BOOL)compareUSOEntityIdentifier1:(id)a0 withUSOEntityIdentifier2:(id)a1;
+ (BOOL)compareUSONode1:(id)a0 withUSONode2:(id)a1;
+ (BOOL)hasDanglingNode:(id)a0 nodes2:(id)a1;

@end
