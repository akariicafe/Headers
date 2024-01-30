@class NSString;
@protocol NURenderStatistics, NUImageBuffer;

@interface _PIParallaxInfillResult : _NURenderResult <PIParallaxInfillResult>

@property (retain, nonatomic) id<NUImageBuffer> infilledImage;
@property (readonly) id<NURenderStatistics> statistics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
