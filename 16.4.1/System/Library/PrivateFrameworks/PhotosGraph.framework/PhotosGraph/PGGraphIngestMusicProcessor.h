@class NSString, PGGraphBuilder;

@interface PGGraphIngestMusicProcessor : NSObject <PGGraphIngestProcessor> {
    PGGraphBuilder *_graphBuilder;
}

@property (class, readonly, nonatomic) unsigned long long nowPlayingStreamConverterOptions;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_ingestStreamEventSession:(id)a0 graph:(id)a1 performerNodesByName:(id)a2;
- (void)processMusicForGraph:(id)a0 progressBlock:(id /* block */)a1;
- (void)runWithGraphUpdate:(id)a0 progressBlock:(id /* block */)a1;
- (void)setGraphBuilder:(id)a0;
- (BOOL)shouldRunWithGraphUpdate:(id)a0;

@end
