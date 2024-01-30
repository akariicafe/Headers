@class NSUUID, NSArray, NSString, DDScannerResult, UIMenu;

@interface VKCBaseDataDetectorElement : VKCBaseElement <VKAnalysisElementDebugMenuProvider>

@property (retain, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) DDScannerResult *scannerResult;
@property (readonly, nonatomic) NSArray *boundingQuads;
@property (readonly, nonatomic) double area;
@property (readonly, nonatomic) double maxLineHeight;
@property (readonly, nonatomic) unsigned long long dataDetectorTypes;
@property (readonly, nonatomic) BOOL isTextDataDetector;
@property (readonly, nonatomic) BOOL isMRCDataDetector;
@property (readonly, nonatomic) BOOL isUnitConversionDataDetector;
@property (readonly, nonatomic) BOOL wantsMacOSHandCursor;
@property (readonly, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) UIMenu *debugMenu;

+ (unsigned long long)dataDetectorTypesForScannerResult:(id)a0;
+ (id)stringArrayForVKDataDetectorTypes:(unsigned long long)a0;

- (id)init;
- (long long)elementType;
- (void).cxx_destruct;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isInspectableCellSelectable;

@end
