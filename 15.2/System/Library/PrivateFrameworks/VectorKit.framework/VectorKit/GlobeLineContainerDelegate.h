@class NSString;

@interface GlobeLineContainerDelegate : NSObject <VKGlobeLineContainerDelegate> {
    void *_renderer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)lineContainerNeedsDisplay:(id)a0;
- (id)initWithRenderer:(void *)a0;

@end
