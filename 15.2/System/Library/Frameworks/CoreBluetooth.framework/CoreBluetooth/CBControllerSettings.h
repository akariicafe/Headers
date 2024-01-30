@interface CBControllerSettings : NSObject <CUXPCCodable>

@property (nonatomic) char setupAssistantIfNoKeyboard;
@property (nonatomic) char setupAssistantIfNoPointingDevice;

- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (id)descriptionWithLevel:(int)a0;
- (id)description;
- (void)encodeWithXPCObject:(id)a0;

@end
