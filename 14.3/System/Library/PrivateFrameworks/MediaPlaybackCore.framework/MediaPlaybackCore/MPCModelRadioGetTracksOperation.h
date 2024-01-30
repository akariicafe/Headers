@class ICRadioGetTracksRequest, ICPlayActivityController, NSString;

@interface MPCModelRadioGetTracksOperation : MPAsyncOperation {
    ICPlayActivityController *_playActivityController;
    ICRadioGetTracksRequest *_request;
    NSString *_siriAssetInfo;
    void *_radioQueueFeederPointerForLogging;
}

@property (copy, nonatomic) id /* block */ completionHandler;

- (void).cxx_destruct;
- (void)execute;
- (void)_runStep:(id)a0 withFinishHandler:(id /* block */)a1;
- (id)_cacheTracksForStep:(id)a0;
- (id)initWithGetTracksRequest:(id)a0 siriAssetInfo:(id)a1 playActivityController:(id)a2 radioQueueFeeder:(id)a3;

@end
