@interface BYDeviceForTest : BYDevice

@property (readonly, nonatomic) BOOL hasSolidStateHomeButton;
@property (readonly, nonatomic) BOOL supportsTrueTone;

- (id)init;

@end
