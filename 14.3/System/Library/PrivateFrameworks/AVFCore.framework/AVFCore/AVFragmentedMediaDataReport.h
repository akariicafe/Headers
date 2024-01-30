@class AVFragmentedMediaDataReportInternal;

@interface AVFragmentedMediaDataReport : NSObject {
    AVFragmentedMediaDataReportInternal *_internal;
}

@property (readonly, nonatomic) long long numberOfBytesToEndOfFirstVideoFrame;

- (id)init;
- (void)dealloc;
- (id)initWithFigFragmentedMediaDataReportDictionary:(id)a0;

@end
