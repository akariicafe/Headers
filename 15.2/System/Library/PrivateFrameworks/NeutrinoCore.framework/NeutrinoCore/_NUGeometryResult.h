@class NUImageGeometry, NSString;
@protocol NURenderStatistics;

@interface _NUGeometryResult : _NURenderResult <NUGeometryResult>

@property (retain) NUImageGeometry *geometry;
@property (readonly) id<NURenderStatistics> statistics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
