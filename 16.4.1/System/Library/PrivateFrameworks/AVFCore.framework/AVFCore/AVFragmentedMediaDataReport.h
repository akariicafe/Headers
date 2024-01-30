@class AVFragmentedMediaDataReportInternal;

@interface AVFragmentedMediaDataReport : NSObject {
    AVFragmentedMediaDataReportInternal *_internal;
}

@property (readonly, nonatomic) long long numberOfBytesToEndOfFirstVideoFrame;

- (void)dealloc;
- (id)init;
- (id)initWithFigFragmentedMediaDataReportDictionary:(id)a0;

@end
