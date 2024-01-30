@class ICUserIdentityProperties, ICRadioGetTracksResponse, NSError, ICPlayActivityController, ICRadioGetTracksRequest;

@interface MPCModelRadioGetTracksStep : NSObject {
    unsigned long long _playActivitySessionToken;
}

@property (readonly, copy, nonatomic) ICUserIdentityProperties *delegatedIdentityProperties;
@property (readonly, copy, nonatomic) NSError *error;
@property (readonly, nonatomic, getter=isFinished) BOOL finished;
@property (readonly, copy, nonatomic) ICUserIdentityProperties *identityProperties;
@property (readonly, copy, nonatomic) ICPlayActivityController *playActivityController;
@property (readonly, nonatomic) unsigned long long playActitySessionToken;
@property (readonly, copy, nonatomic) ICRadioGetTracksRequest *request;
@property (readonly, copy, nonatomic) ICRadioGetTracksResponse *response;
@property (readonly, nonatomic) ICRadioGetTracksResponse *siriAssetInfoGetTracksResponse;

- (void).cxx_destruct;
- (void)performWithCompletionHandler:(id /* block */)a0;
- (id)initWithGetTracksRequest:(id)a0 siriAssetInfo:(id)a1 playActivityController:(id)a2;
- (id)initWithPreviousStep:(id)a0;
- (void)_performDefaultHandlingForButtonAction:(id)a0;
- (void)_presentServerDialog:(id)a0 completionHandler:(id /* block */)a1;
- (id)nextStepWithError:(id)a0;
- (void)_fireAndForgetServerDialog:(id)a0;

@end
