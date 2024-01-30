@class NSString;

@interface _MediaControlsNoopButtonEventConsumer : NSObject <SBSHardwareButtonEventConsuming>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)consumeAnyPressEventForButtonKind:(long long)a0;

@end
