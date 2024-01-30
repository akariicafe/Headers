@class NUImageGeometry, NSString, NSURL, NSData;
@protocol NURenderStatistics;

@interface _NUImageExportResult : _NUExportResult <NUImageExportResult>

@property (retain) NSURL *destinationURL;
@property (retain) NSData *destinationData;
@property (readonly) NUImageGeometry *geometry;
@property (readonly) id<NURenderStatistics> statistics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
