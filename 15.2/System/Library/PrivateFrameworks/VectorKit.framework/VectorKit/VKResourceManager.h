@class NSBundle;

@interface VKResourceManager : NSObject {
    NSBundle *_vkBundle;
}

- (BOOL)isDevResourceWithName:(id)a0;
- (id)dataForResourceWithName:(id)a0 fallbackNameHandler:(id /* block */)a1;
- (id)init;
- (id)pathForResourceWithName:(id)a0;
- (id)dataForResourceWithName:(id)a0;
- (void)dealloc;
- (id)_localNameForResourceName:(id)a0;

@end
