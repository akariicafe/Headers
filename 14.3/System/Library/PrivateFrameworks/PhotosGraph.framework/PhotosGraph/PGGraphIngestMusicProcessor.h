@class NSString, NSObject;
@protocol OS_os_log;

@interface PGGraphIngestMusicProcessor : NSObject <PGGraphIngestProcessor>

@property (class, readonly, nonatomic) unsigned long long nowPlayingStreamConverterOptions;

@property (readonly, nonatomic) NSObject<OS_os_log> *loggingConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)processMusicForGraph:(id)a0 progressBlock:(id /* block */)a1;
- (id)_ingestStreamEventSession:(id)a0 graph:(id)a1 performerNodesByName:(id)a2;
- (void)runWithGraphUpdate:(id)a0 progressBlock:(id /* block */)a1;
- (BOOL)shouldRunWithGraphUpdate:(id)a0;

@end
