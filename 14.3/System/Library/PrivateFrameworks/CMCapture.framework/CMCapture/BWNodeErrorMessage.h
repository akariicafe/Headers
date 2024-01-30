@class BWNodeError;

@interface BWNodeErrorMessage : BWNodeMessage {
    BWNodeError *_nodeError;
}

@property (readonly) BWNodeError *nodeError;

+ (id)newMessageWithNodeError:(id)a0;

- (void)dealloc;
- (id)_initWithNodeError:(id)a0;

@end
