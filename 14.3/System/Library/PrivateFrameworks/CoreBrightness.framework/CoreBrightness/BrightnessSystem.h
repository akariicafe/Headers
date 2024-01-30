@class BrightnessSystemInternal;

@interface BrightnessSystem : NSObject {
    BrightnessSystemInternal *bsi;
}

- (id)init;
- (void)dealloc;
- (id)copyPropertyForKey:(id)a0;
- (void)registerNotificationBlock:(id /* block */)a0;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (BOOL)isAlsSupported;

@end
