@class NSArray, NSUUID, NSString, CRNormalizedQuad, CRNormalizedPolyline, CRTextFeature;

@interface CROutputRegion : NSObject <CRCodable, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *children;
@property (retain, nonatomic) NSArray *candidates;
@property (retain, nonatomic) NSArray *transcriptComponents;
@property (retain, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *recognizedLocale;
@property (nonatomic) int confidence;
@property (nonatomic) float rawConfidence;
@property (retain, nonatomic) CRNormalizedQuad *boundingQuad;
@property (retain, nonatomic) CRNormalizedPolyline *polygon;
@property (retain, nonatomic) CRTextFeature *textFeature;
@property (nonatomic) double baselineAngle;
@property (readonly, nonatomic) BOOL computesBoundsFromChildren;
@property (readonly, nonatomic) BOOL computesTranscriptFromChildren;
@property (readonly, nonatomic) NSArray *regionsSuitableForDataDetectorOutput;
@property (nonatomic) BOOL shouldComputeBoundsFromChildren;
@property (nonatomic) BOOL shouldComputeTranscriptFromChildren;
@property (retain, nonatomic) NSArray *dataDetectorRegions;
@property (retain, nonatomic) NSArray *paragraphRegions;
@property (retain, nonatomic) NSArray *listRegions;
@property (readonly) unsigned long long type;
@property (readonly) NSArray *contentBaselines;
@property (readonly, nonatomic) long long wordCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)decodableClasses;
+ (Class)decodableClassFromClassName:(id)a0;
+ (id)decodableSubClasses;
+ (id)outputRegionWithCRCodableDataRepresentation:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)closestContentRegionOfType:(unsigned long long)a0 toNormalizedPoint:(struct CGPoint { double x0; double x1; })a1 maxPixelDistance:(long long)a2;
- (id)contentRegionOfType:(unsigned long long)a0 containingTextAtIndex:(long long)a1;
- (id)contentsWithTypes:(unsigned long long)a0;
- (id)outputRegionWithContentsOfCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)quadForTextInCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfContentRegion:(id)a0;
- (id)selectedLocale;
- (id)outputRegionWithContentsOfQuad:(id)a0;
- (void)enumerateContentsWithTypes:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeForChild:(id)a0;
- (unsigned long long)_indexOfNearestRegionToPoint:(struct CGPoint { double x0; double x1; })a0 regions:(id)a1 returnFirstMatch:(BOOL)a2 distance:(double *)a3;
- (void)_computeTranscript;
- (id)_copyChildrenInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)_enumerateRegions:(id)a0 withTypes:(unsigned long long)a1 recursively:(BOOL)a2 usingBlock:(id /* block */)a3;
- (unsigned long long)_indexOfNearestChildToPoint:(struct CGPoint { double x0; double x1; })a0 returnFirstMatch:(BOOL)a1;
- (void)_invalidateTranscript;
- (void)_invalidateTranscriptRecursivelyThrough:(Class)a0;
- (void)_overrideSetBoundingQuad:(id)a0;
- (id)computeDataDetectorRegions;
- (BOOL)contributesToDocumentHierarchy;
- (id)copyIncludingChildren:(BOOL)a0 includingCandidates:(BOOL)a1;
- (id)copyIncludingChildren:(BOOL)a0 includingCandidates:(BOOL)a1 deepCopy:(BOOL)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0 copyChildren:(BOOL)a1 copyCandidates:(BOOL)a2 deepCopy:(BOOL)a3;
- (id)crCodableDataRepresentation;
- (id)decodeOutputsArrayFromData:(id)a0 offset:(unsigned long long *)a1;
- (id)initWithCRCodableDataRepresentation:(id)a0 version:(long long)a1 offset:(unsigned long long *)a2;
- (id)initWithConfidence:(int)a0 baselineAngle:(double)a1;
- (id)joiningDelimiter;
- (id)outputRegionWithContentsBetweenStartPoint:(struct CGPoint { double x0; double x1; })a0 endPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)outputRegionWithContentsEndingAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)outputRegionWithContentsStartingAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)scriptCategoryResults;
- (id)sequenceScriptOutputResult;
- (long long)wordCountInCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
