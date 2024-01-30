@class NSLock, SKUIClientContext, UIImage;

@interface SKUIMediaSocialSaveProfilePhotoOperation : SSVComplexOperation {
    SKUIClientContext *_clientContext;
    NSLock *_lock;
    id /* block */ _outputBlock;
    UIImage *_photo;
}

- (void)main;
- (id /* block */)outputBlock;
- (void)setOutputBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)setPhoto:(id)a0;
- (id)_photoUploadWithResponseDictionary:(id)a0;
- (id)_requestWithError:(id *)a0;
- (id)initWithClientContext:(id)a0;

@end
