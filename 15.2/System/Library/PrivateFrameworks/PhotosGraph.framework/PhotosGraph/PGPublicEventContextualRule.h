@class PGGraphMomentNodeCollection, NSString, PGGraphPublicEventNodeCollection, PGGraph, PHPhotoLibrary, NSObject;
@protocol OS_os_log;

@interface PGPublicEventContextualRule : NSObject <PGContextualRule> {
    PGGraph *_graph;
    PGGraphPublicEventNodeCollection *_publicEventNodes;
    PGGraphMomentNodeCollection *_momentNodesMatchingPublicEvents;
    PHPhotoLibrary *_photoLibrary;
    NSObject<OS_os_log> *_loggingConnection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)canProvideContextualKeyAssetsWithOptions:(id)a0;
- (void)enumerateContextualKeyAssetsForYearHighlight:(id)a0 withOptions:(id)a1 modelReader:(id)a2 curationContext:(id)a3 usingBlock:(id /* block */)a4;
- (id)initWithGraph:(id)a0 photoLibrary:(id)a1 loggingConnection:(id)a2;
- (id)highlightNodesMatchingYearHighlight:(id)a0 withOptions:(id)a1;

@end
