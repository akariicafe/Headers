@interface CBControllerSettings : NSObject <CUXPCCodable>

@property (nonatomic) int discoverableState;
@property (nonatomic) char hid15msWithHeadset;
@property (nonatomic) char setupAssistantIfNoKeyboard;
@property (nonatomic) char setupAssistantIfNoPointingDevice;
@property (nonatomic) char spatialSoundProfileAllowed;

- (void)encodeWithXPCObject:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (id)descriptionWithLevel:(int)a0;
- (id)description;

@end
