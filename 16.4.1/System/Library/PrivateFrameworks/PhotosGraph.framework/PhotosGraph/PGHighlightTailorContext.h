@class PGTitleGenerationContext, CLSCurationContext, PHPhotoLibrary, PGNeighborScoreComputer, NSObject;
@protocol OS_os_log;

@interface PGHighlightTailorContext : NSObject

@property (readonly) PHPhotoLibrary *photoLibrary;
@property (readonly) PGNeighborScoreComputer *neighborScoreComputer;
@property (readonly) CLSCurationContext *curationContext;
@property (readonly) NSObject<OS_os_log> *loggingConnection;
@property (readonly) PGTitleGenerationContext *titleGenerationContext;

- (id)initForTesting;
- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0 graph:(id)a1 loggingConnection:(id)a2;

@end
