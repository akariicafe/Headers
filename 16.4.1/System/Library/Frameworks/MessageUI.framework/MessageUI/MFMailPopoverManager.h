@class NSString, NSMutableArray;

@interface MFMailPopoverManager : NSObject <UIAdaptivePresentationControllerDelegate> {
    NSMutableArray *_passThroughProviders;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)enumerateManagersUsingBlock:(id /* block */)a0;
+ (id)managerForWindow:(id)a0 createIfNeeded:(BOOL)a1;

- (id)_init;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)addPassthroughViewProvider:(id)a0;
- (id)allPassThroughViews;
- (void)removePassthroughViewProvider:(id)a0;

@end
