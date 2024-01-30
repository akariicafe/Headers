@class NUImageGeometry, NURegion, NSString;
@protocol NURenderStatistics, NUSurfaceImage;

@interface _NUSurfaceRenderResult : _NUImageRenderResult <NUSurfaceRenderResult>

@property (retain) id<NUSurfaceImage> image;
@property (readonly) NURegion *region;
@property (readonly) NUImageGeometry *geometry;
@property (readonly) id<NURenderStatistics> statistics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
