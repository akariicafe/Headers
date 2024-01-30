@class NSSet, NSString, ICStoreRequestContext;

@interface ICUpdateAutomaticDownloadMediaKindsRequest : ICRequestOperation <AMSRequestPresentationDelegate> {
    ICStoreRequestContext *_requestContext;
    NSSet *_mediaKindsToAdd;
    NSSet *_mediaKindsToRemove;
}

@property (class, readonly, nonatomic) NSSet *automaticDownloadMediaKindsForMusic;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)execute;
- (void).cxx_destruct;
- (void)handleDialogRequest:(id)a0 completion:(id /* block */)a1;
- (void)handleAuthenticateRequest:(id)a0 completion:(id /* block */)a1;
- (id)initWithRequestContext:(id)a0 mediaKindsToAdd:(id)a1 mediaKindsToRemove:(id)a2;

@end
