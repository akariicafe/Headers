@class NSLock, SKUIClientContext, SKUIMediaSocialProfile;

@interface SKUIMediaSocialLoadProfilePhotoOperation : SSVComplexOperation {
    SKUIClientContext *_clientContext;
    NSLock *_lock;
    id /* block */ _outputBlock;
    SKUIMediaSocialProfile *_profile;
}

@property (copy) id /* block */ outputBlock;

- (void).cxx_destruct;
- (id)initWithClientContext:(id)a0;
- (void)main;
- (id)_silhouette;
- (void)_returnPhoto:(id)a0 isFinal:(BOOL)a1;
- (void)_fetchProfile;
- (void)_fetchMonogram;
- (void)_fetchPhoto;

@end
