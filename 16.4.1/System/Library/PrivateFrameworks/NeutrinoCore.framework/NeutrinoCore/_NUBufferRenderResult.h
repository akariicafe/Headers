@class NUImageGeometry, NURegion, NSString;
@protocol NURenderStatistics, NUBufferImage;

@interface _NUBufferRenderResult : _NUImageRenderResult <NUBufferRenderResult>

@property (retain) id<NUBufferImage> image;
@property (readonly) NURegion *region;
@property (readonly) NUImageGeometry *geometry;
@property (readonly) id<NURenderStatistics> statistics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
