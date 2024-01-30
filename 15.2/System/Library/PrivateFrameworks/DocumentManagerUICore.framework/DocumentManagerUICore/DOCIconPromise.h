@class UIImage, NSString, DOCThumbnailRequest;

@interface DOCIconPromise : NSObject <DOCThumbnail> {
    UIImage *_icon;
    DOCThumbnailRequest *_request;
}

@property (readonly, nonatomic, getter=isLoading) BOOL loading;
@property (readonly, nonatomic) BOOL isRepresentativeIcon;
@property (readonly, nonatomic) UIImage *thumbnail;
@property (readonly) BOOL hasFinishedTryingToFetchCorrectThumbnail;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRequest:(id)a0;
- (void)removeListener:(id)a0;
- (void)addListener:(id)a0;
- (void).cxx_destruct;
- (void)scheduleUpdateIfNeeded;
- (id)averageColorInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)registerGenerationCompletionHandler:(id /* block */)a0;

@end
