@class BrightnessSystemInternal;

@interface BrightnessSystem : NSObject {
    BrightnessSystemInternal *bsi;
}

- (void)registerNotificationBlock:(id /* block */)a0;
- (void)registerNotificationBlock:(id /* block */)a0 forProperties:(id)a1;
- (id)copyPropertyForKey:(id)a0;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (BOOL)isAlsSupported;
- (id)init;
- (void)dealloc;

@end
