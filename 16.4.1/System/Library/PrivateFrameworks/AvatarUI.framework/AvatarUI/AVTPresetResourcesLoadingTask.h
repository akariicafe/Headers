@class NSArray, NSString;

@interface AVTPresetResourcesLoadingTask : NSObject <AVTPreloadingTask>

@property (readonly, copy, nonatomic) NSArray *presetResources;
@property (getter=isCanceled) BOOL canceled;
@property (readonly, copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void).cxx_destruct;
- (id)initWithPresetResources:(id)a0 completionHandler:(id /* block */)a1;

@end
