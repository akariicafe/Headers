@class FPXPCAutomaticErrorProxy, NSDate;

@interface _FPDExtensionRequestRecord : NSObject

@property (weak) FPXPCAutomaticErrorProxy *proxy;
@property (nonatomic) SEL selector;
@property (nonatomic) NSDate *timeout;

- (id)description;
- (void).cxx_destruct;

@end
