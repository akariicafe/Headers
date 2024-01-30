@class NSArray, NSString;

@interface VKDataScannerViewControllerConfiguration : NSObject <NSCopying>

@property (nonatomic, getter=isPinchToZoomEnabled) BOOL pinchToZoomEnabled;
@property (nonatomic, getter=isGuidanceEnabled) BOOL guidanceEnabled;
@property (nonatomic, getter=isHighlightingEnabled) BOOL highlightingEnabled;
@property (nonatomic) unsigned long long qualityLevel;
@property (nonatomic) unsigned long long scannerType;
@property (nonatomic) BOOL recognizesMultipleItems;
@property (copy, nonatomic) NSArray *recognitionLanguages;
@property (nonatomic) NSString *textContentType;
@property (copy, nonatomic) NSArray *symbologies;
@property (nonatomic) BOOL highFrameRateItemTracking;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqualToTextScannerViewControllerConfiguration:(id)a0;

@end
