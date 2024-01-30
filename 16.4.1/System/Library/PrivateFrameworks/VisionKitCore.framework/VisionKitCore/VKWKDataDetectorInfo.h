@class NSArray, DDScannerResult;

@interface VKWKDataDetectorInfo : NSObject

@property (retain, nonatomic) DDScannerResult *result;
@property (copy, nonatomic) NSArray *boundingQuads;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } characterRange;

- (void).cxx_destruct;

@end
