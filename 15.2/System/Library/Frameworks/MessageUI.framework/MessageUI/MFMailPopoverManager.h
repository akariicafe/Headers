@class NSString, NSMutableArray;

@interface MFMailPopoverManager : NSObject <UIAdaptivePresentationControllerDelegate> {
    NSMutableArray *_passThroughProviders;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)managerForWindow:(id)a0 createIfNeeded:(BOOL)a1;
+ (void)enumerateManagersUsingBlock:(id /* block */)a0;

- (void).cxx_destruct;
- (id)init;
- (id)_init;
- (void)dealloc;
- (void)addPassthroughViewProvider:(id)a0;
- (void)removePassthroughViewProvider:(id)a0;
- (id)allPassThroughViews;

@end
