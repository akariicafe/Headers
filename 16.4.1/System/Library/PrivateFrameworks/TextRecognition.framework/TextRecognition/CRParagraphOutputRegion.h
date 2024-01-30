@class NSString;

@interface CRParagraphOutputRegion : CRCompositeOutputRegion <CROutputRegionLayoutContributing>

@property BOOL useLineSeparatorAsJoiningDelimiter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)paragraphWithLines:(id)a0 confidence:(int)a1 baselineAngle:(double)a2;
+ (id)paragraphsWithLines:(id)a0;

- (unsigned long long)type;
- (id)layoutComponents;
- (BOOL)contributesToDocumentHierarchy;
- (id)copyWithZone:(struct _NSZone { } *)a0 copyChildren:(BOOL)a1 copyCandidates:(BOOL)a2 deepCopy:(BOOL)a3;
- (id)joiningDelimiter;
- (id)regionsSuitableForDataDetectorOutput;

@end
