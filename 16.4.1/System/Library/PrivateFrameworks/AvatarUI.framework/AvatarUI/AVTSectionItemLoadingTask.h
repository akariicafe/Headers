@class NSString;
@protocol AVTAvatarAttributeEditorSectionItemPrefetching;

@interface AVTSectionItemLoadingTask : NSObject <AVTPreloadingTask>

@property (readonly, copy, nonatomic) id<AVTAvatarAttributeEditorSectionItemPrefetching> sectionItem;
@property (getter=isCanceled) BOOL canceled;
@property (readonly, copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void).cxx_destruct;
- (id)initWithSectionItem:(id)a0 completionHandler:(id /* block */)a1;

@end
