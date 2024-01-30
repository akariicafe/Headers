@class NSData, NSArray, NSDictionary, CHStrokeClutterFilter, CHStrokeGroupingResult, CHStrokeClassificationResult, NSString;
@protocol CHStrokeProviderVersion;

@interface CHRecognitionSessionResult : NSObject <NSCopying, NSSecureCoding> {
    long long __transcriptionCapability;
    NSData *_encodedStrokeProviderVersion;
    BOOL __shouldUseCachedHasCompleteRecognitionResults;
    BOOL __hasCompleteRecognitionResults;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *_recognitionResultsByGroupID;
@property (readonly, copy, nonatomic) NSDictionary *_textCorrectionResultsByGroupID;
@property (readonly, nonatomic) long long _transcriptionCapability;
@property (readonly, retain, nonatomic) id<CHStrokeProviderVersion> strokeProviderVersion;
@property (readonly, retain, nonatomic) NSArray *orderedStrokeIdentifiers;
@property (readonly, nonatomic) long long sessionMode;
@property (readonly, copy, nonatomic) NSArray *locales;
@property (readonly, copy, nonatomic) NSArray *preferredLocales;
@property (readonly, retain, nonatomic) CHStrokeClutterFilter *clutterFilter;
@property (readonly, nonatomic) long long recognitionEnvironment;
@property (readonly, retain, nonatomic) CHStrokeClassificationResult *strokeClassificationResult;
@property (readonly, retain, nonatomic) CHStrokeGroupingResult *strokeGroupingResult;
@property (readonly, nonatomic) struct { double strokeClutterFilteringDuration; double strokeClassificationDuration; double groupingDuration; double recognitionDuration; double totalDuration; } generationDuration;
@property (readonly, nonatomic) NSString *highConfidenceDebugDescription;
@property (readonly, nonatomic) NSString *allResultsDebugDescription;
@property (readonly, nonatomic) NSArray *allResultsDebugDescriptionByGroup;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)recognitionResultForStrokeGroupIdentifier:(long long)a0;
- (id)_resultsDebugDescriptionIntoGroupsArray:(id)a0 groupHeaderBlock:(id /* block */)a1;
- (id)textCorrectionResultForStrokeGroupIdentifier:(long long)a0;
- (id)encodedStrokeProviderVersion;
- (id)initWithStrokeProviderVersion:(id)a0 encodedStrokeProviderVersion:(id)a1 orderedStrokeIdentifiers:(id)a2 sessionMode:(long long)a3 locales:(id)a4 preferredLocales:(id)a5 clutterFilter:(id)a6 strokeClassificationResult:(id)a7 strokeGroupingResult:(id)a8 recognitionResults:(id)a9 inlineContinuousModeResults:(id)a10 generationDuration:(struct { double x0; double x1; double x2; double x3; double x4; })a11 recognitionEnvironment:(long long)a12;
- (BOOL)isEqualToSerializableRecognitionSessionResult:(id)a0;
- (BOOL)isEqualToRecognitionSessionResult:(id)a0;
- (id)initWithResult:(id)a0 validStrokes:(id)a1;
- (id)allResultsDebugDescriptionWithGroupHeaderBlock:(id /* block */)a0;
- (id)fullyCoveredStrokeGroupsForContextStrokes:(id)a0 partiallyCoveredStrokeGroups:(id *)a1;
- (id)contextualResultsWithFullyCoveredStrokeGroups:(id)a0 partiallyCoveredStrokeGroups:(id)a1 drawingCanvasSize:(struct CGSize { double x0; double x1; })a2;
- (BOOL)hasCompleteRecognitionResults;

@end
