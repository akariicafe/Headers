@class NSString;

@interface TSWPURLDataDetector : NSObject <TSWPDataDetectorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initURLCharacterSets;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })expandValidRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inString:(id)a1;
+ (id)newArrayByScanningString:(id)a0 scanRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)newURLFromString:(id)a0;
+ (id)detectorIdentifier;
+ (void)setInvalidURLSchemes:(id)a0;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })calculateScanRangeForString:(id)a0 changedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)scanString:(id)a0 scanRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;


@end
