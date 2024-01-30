@class NSString, NUImageHistogram;
@protocol NURenderStatistics;

@interface _NUHistogramRenderResult : _NURenderResult <NUHistogramRenderResult>

@property (readonly) NUImageHistogram *histogram;
@property (readonly) id<NURenderStatistics> statistics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithHistogram:(id)a0;

@end
