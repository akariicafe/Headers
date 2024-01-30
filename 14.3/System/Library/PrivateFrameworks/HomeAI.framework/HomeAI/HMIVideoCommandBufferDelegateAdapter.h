@class NSString;

@interface HMIVideoCommandBufferDelegateAdapter : HMFObject <HMIVideoCommandBufferDelegate>

@property (copy) id /* block */ bufferWillHandleSampleBuffer;
@property (copy) id /* block */ bufferWillFlush;
@property (copy) id /* block */ bufferWillFinish;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
