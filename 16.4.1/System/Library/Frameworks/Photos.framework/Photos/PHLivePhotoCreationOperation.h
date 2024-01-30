@class NSArray;

@interface PHLivePhotoCreationOperation : NSOperation

@property (readonly, nonatomic) struct CGSize { double width; double height; } targetSize;
@property (readonly, nonatomic) long long contentMode;
@property (readonly, copy, nonatomic) NSArray *resourceURLs;
@property (readonly, copy, nonatomic) id /* block */ resultHandler;

- (void)main;
- (void).cxx_destruct;
- (id)_createImageOnlyLivePhotoWithImageURL:(id)a0;
- (id)initWithResourceURLs:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 resultHandler:(id /* block */)a3;

@end
