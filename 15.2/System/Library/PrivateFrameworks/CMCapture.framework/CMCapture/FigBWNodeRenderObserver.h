@class NSString, BWNode;

@interface FigBWNodeRenderObserver : NSObject <BWNodeRenderDelegate> {
    BWNode *_node;
}

@property (copy, nonatomic) id /* block */ willRenderSampleBufferHandler;
@property (copy, nonatomic) id /* block */ formatDidBecomeLiveHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBWNode:(id)a0;
- (void)node:(id)a0 format:(id)a1 didBecomeLiveForOutput:(id)a2;
- (void)node:(id)a0 willRenderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 forInput:(id)a2;
- (void)dealloc;
- (void)node:(id)a0 format:(id)a1 didBecomeLiveForInput:(id)a2;

@end
