@class AVFlashlightInternal;

@interface AVFlashlight : NSObject {
    AVFlashlightInternal *_internal;
}

@property (readonly, nonatomic, getter=isAvailable) BOOL available;
@property (readonly, nonatomic, getter=isOverheated) BOOL overheated;
@property (readonly, nonatomic) float flashlightLevel;

+ (void)initialize;
+ (BOOL)hasFlashlight;

- (void)_teardownFlashlight;
- (void)_reconnectToServer;
- (void)_setupFlashlight;
- (BOOL)setFlashlightLevel:(float)a0 withError:(id *)a1;
- (BOOL)turnPowerOnWithError:(id *)a0;
- (void)_handleNotification:(id)a0 payload:(id)a1;
- (void)turnPowerOff;
- (id)init;
- (void)dealloc;

@end
