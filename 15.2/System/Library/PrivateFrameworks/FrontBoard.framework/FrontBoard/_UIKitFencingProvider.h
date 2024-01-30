@class NSString;

@interface _UIKitFencingProvider : NSObject <FBFencingProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)synchronizeDrawingWithFence:(id)a0;
- (id)systemAnimationFenceExemptQueue;

@end
