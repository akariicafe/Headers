@class NSBundle;

@interface VKResourceManager : NSObject {
    NSBundle *_vkBundle;
}

- (id)dataForResourceWithName:(id)a0;
- (id)init;
- (void)dealloc;
- (BOOL)isDevResourceWithName:(id)a0;
- (id)_localNameForResourceName:(id)a0;
- (id)pathForResourceWithName:(id)a0;

@end
