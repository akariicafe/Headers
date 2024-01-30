@class NSString, NSDataDetector;

@interface TSWPURLDataDetector : NSObject <TSWPDataDetectorProtocol>

@property (retain, nonatomic) NSDataDetector *detector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)detectorIdentifier;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })expandValidRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inString:(id)a1;
+ (id)newArrayByScanningString:(id)a0 scanRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)newURLFromString:(id)a0;
+ (void)setInvalidURLSchemes:(id)a0;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })calculateScanRangeForString:(id)a0 changedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)scanString:(id)a0 scanRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (BOOL)detectedDataInString:(id)a0 scanRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 withTextCheckingTypes:(unsigned long long)a2;
+ (id)p_newArrayByScanningString:(id)a0 scanRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 returnAllResults:(BOOL)a2 dataDetector:(id)a3;
+ (id)_newDetector;
+ (id)p_rangesSplitByNewLineOfString:(id)a0 scanRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
