@class NSString, NSArray;

@interface SGStructuredEventDocument : SGExtractionDocument {
    BOOL _fromSuggestTool;
}

@property (readonly, nonatomic) NSString *plainText;
@property (readonly, nonatomic) unsigned char category;
@property (readonly, nonatomic) NSArray *dataDetectorMatches;

+ (id)candidatesForLabelIndexSets:(id)a0 inPlainText:(id)a1 forTaggedCharacterRanges:(id)a2;
+ (id)modelOutputSummary:(id)a0;
+ (id)simpleCandidateResolutionFromCandidates:(id)a0;
+ (id)cleanCandidates:(id)a0 outputName:(id)a1 label:(id)a2;
+ (BOOL)caseInsensitiveContainsString:(id)a0 inCandidates:(id)a1;
+ (id)stripRepeatedContent:(id)a0 repeatedLength:(unsigned long long)a1;

- (id)resolveCandidates:(id)a0 forCategory:(unsigned char)a1 label:(id)a2 rawIndexSet:(id)a3 taggedCharacterRanges:(id)a4;
- (void).cxx_destruct;
- (id)initWithPlainText:(id)a0 category:(unsigned char)a1 dataDetectorMatches:(id)a2 enrichedTaggedCharacterRanges:(id)a3 modelOutput:(id)a4 fromSuggestTool:(BOOL)a5;
- (id)detectedEventName;
- (id)detectedReservationIdWithError:(id *)a0;
- (id)detectedStartDateComponents;
- (id)detectedEndDateComponents;
- (id)filterCandidateDateComponents:(id)a0;
- (id)detectedStartAddressWithError:(id *)a0;
- (id)detectedEndAddressWithError:(id *)a0;
- (id)detectedAddressForLabel:(id)a0 withError:(id *)a1;
- (id)detectedStartPlaceWithError:(id *)a0;
- (id)detectedEndPlaceWithError:(id *)a0;
- (id)_simpleCandidateForOutputName:(id)a0 label:(id)a1 withError:(id *)a2;
- (id)mergePostalAddressComponents:(id)a0;
- (id)detectedPostalAddressExtractionForTokenIndexes:(id)a0 dataDetectorMatches:(id)a1 label:(id)a2;
- (id)titleMapping;
- (id)modelOutputSummary;
- (id)predictedStringsFromModelOutput;
- (id)labelTokenIndexesForOutputName:(id)a0 label:(id)a1;
- (BOOL)detectedEventPolarity;

@end
