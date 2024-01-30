@class NSArray, NSString, NSDictionary, NSDate, PGGraphNode, PHPhotosHighlight;
@protocol PGGraphRelatableEvent;

@interface PGRelated : NSObject

@property (retain, nonatomic) PGGraphNode<PGGraphRelatableEvent> *eventNode;
@property (retain, nonatomic) PHPhotosHighlight *highlight;
@property (retain, nonatomic) NSArray *moments;
@property (retain, nonatomic) NSString *debugDescription;
@property (nonatomic) double score;
@property (nonatomic) double matchingScore;
@property (nonatomic) long long titleCategory;
@property (nonatomic) long long dateMatchingType;
@property (nonatomic) unsigned long long memoryTripTitleType;
@property (nonatomic, getter=isGeneratingTitleBasedOnKeyAsset) BOOL generateTitleBasedOnKeyAsset;
@property (nonatomic) BOOL shouldGenerateTitle;
@property (nonatomic) unsigned short graphSchemaVersion;
@property (nonatomic) unsigned short relatedAlgorithmsVersion;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSDate *localStartDate;
@property (readonly, nonatomic) NSDate *localEndDate;
@property (readonly, nonatomic) NSDictionary *keywords;
@property (readonly, nonatomic) unsigned int aggregatedVersions;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

- (void).cxx_destruct;
- (id)_initWithGraphMatchingResult:(id)a0 highlight:(id)a1 moments:(id)a2 needsDebugInfo:(BOOL)a3;
- (id)initWithGraphMatchingResult:(id)a0 assetCollection:(id)a1 needsDebugInfo:(BOOL)a2;
- (id)initWithGraphMatchingResult:(id)a0 highlight:(id)a1 needsDebugInfo:(BOOL)a2;
- (id)initWithGraphMatchingResult:(id)a0 moment:(id)a1 needsDebugInfo:(BOOL)a2;
- (id)initWithGraphMatchingResult:(id)a0 moments:(id)a1 tripMemoryTitleType:(unsigned long long)a2 tripMomentNodes:(id)a3 needsDebugInfo:(BOOL)a4;
- (id)initWithMoment:(id)a0 needsDebugInfo:(BOOL)a1;
- (id)initWithHighlight:(id)a0 needsDebugInfo:(BOOL)a1;
- (void)_generateTitleWithHighlightNode:(id)a0 referenceDateInterval:(id)a1;
- (void)_generateTitleWithMomentNodes:(id)a0 keyAsset:(id)a1 referenceDateInterval:(id)a2;
- (void)_addKeywordsFromKeywords:(id)a0;
- (void)_addKeywords:(id)a0 forRelatedType:(unsigned long long)a1;

@end
