@interface __HMFSelectorMessageHandler : __HMFMessageHandler

@property (readonly) SEL selector;

- (BOOL)isEqual:(id)a0;
- (BOOL)invokeWithMessage:(id)a0;

@end
