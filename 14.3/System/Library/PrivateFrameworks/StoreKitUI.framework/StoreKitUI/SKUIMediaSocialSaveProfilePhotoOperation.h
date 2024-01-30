@class NSLock, SKUIClientContext, UIImage;

@interface SKUIMediaSocialSaveProfilePhotoOperation : SSVComplexOperation {
    SKUIClientContext *_clientContext;
    NSLock *_lock;
    id /* block */ _outputBlock;
    UIImage *_photo;
}

- (void)setPhoto:(id)a0;
- (void).cxx_destruct;
- (id)initWithClientContext:(id)a0;
- (id /* block */)outputBlock;
- (void)main;
- (void)setOutputBlock:(id /* block */)a0;
- (id)_requestWithError:(id *)a0;
- (id)_photoUploadWithResponseDictionary:(id)a0;

@end
