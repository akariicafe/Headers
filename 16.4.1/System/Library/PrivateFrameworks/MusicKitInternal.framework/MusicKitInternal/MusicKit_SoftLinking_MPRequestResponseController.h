@class MusicKit_SoftLinking_MPCPlayerRequest, NSString, MPRequestResponseController;
@protocol MusicKit_SoftLinking_MPCPlayerResponse;

@interface MusicKit_SoftLinking_MPRequestResponseController : NSObject <MPRequestResponseControllerDelegate> {
    MPRequestResponseController *_underlyingRequestResponseController;
}

@property (retain, nonatomic) MusicKit_SoftLinking_MPCPlayerRequest *request;
@property (readonly, nonatomic) id<MusicKit_SoftLinking_MPCPlayerResponse> response;
@property (copy, nonatomic) id /* block */ responseHandler;
@property (copy, nonatomic) id /* block */ shouldRetryFailedRequestWithErrorHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)controller:(id)a0 shouldRetryFailedRequestWithError:(id)a1;
- (void)setNeedsReload;
- (void)endAutomaticResponseLoading;
- (void)setNeedsReloadForSignificantRequestChange;
- (void)controller:(id)a0 defersResponseReplacement:(id /* block */)a1;
- (void)reloadIfNeeded;
- (id)init;
- (void)beginAutomaticResponseLoading;
- (void).cxx_destruct;
- (id)initWithUnderlyingRequestResponseController:(id)a0;

@end
