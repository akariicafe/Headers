@class NSString, NSDictionary, PGGraph, PHPhotoLibrary;

@interface PGCuratedLibraryFTEMetricEvent : NSObject <PLMetricEvent>

@property (readonly, nonatomic) PGGraph *graph;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSDictionary *payload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
