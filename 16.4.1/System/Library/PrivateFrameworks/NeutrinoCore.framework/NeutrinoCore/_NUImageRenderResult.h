@class NUImageGeometry, NURegion, NSString;
@protocol NURenderStatistics;

@interface _NUImageRenderResult : _NURenderResult <NUImageRenderResult>

@property (retain) NURegion *region;
@property (retain) NUImageGeometry *geometry;
@property (readonly) id<NURenderStatistics> statistics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
