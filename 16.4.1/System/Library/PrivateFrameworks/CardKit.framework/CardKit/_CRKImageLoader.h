@class NSString, INUIImageLoader;
@protocol _CRKImageLoaderDelegate;

@interface _CRKImageLoader : NSObject <SFResourceLoader> {
    INUIImageLoader *_imageLoader;
}

@property (weak, nonatomic) id<_CRKImageLoaderDelegate> delegate;
@property (nonatomic) BOOL active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)sharedInstanceWithInitialDelegate:(id)a0;

- (BOOL)loadImage:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_loadSFImageForURL:(id)a0 completion:(id /* block */)a1;
- (void)_registerWithSearchFoundation;
- (void)_unregisterWithSearchFoundaton;
- (id)resourceIdentifierForLocalImageType:(int)a0;

@end
