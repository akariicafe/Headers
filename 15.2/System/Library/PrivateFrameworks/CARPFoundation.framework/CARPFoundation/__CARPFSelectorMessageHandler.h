@interface __CARPFSelectorMessageHandler : __CARPFMessageHandler

@property (readonly) SEL selector;

- (BOOL)isEqual:(id)a0;
- (BOOL)invokeWithMessage:(id)a0;

@end
