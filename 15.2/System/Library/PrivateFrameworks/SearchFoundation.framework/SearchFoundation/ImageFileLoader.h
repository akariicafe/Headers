@class NSString;

@interface ImageFileLoader : NSObject <SFResourceLoader>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)loadImage:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
