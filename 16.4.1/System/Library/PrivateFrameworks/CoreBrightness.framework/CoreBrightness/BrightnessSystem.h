@class BrightnessSystemInternal;

@interface BrightnessSystem : NSObject {
    BrightnessSystemInternal *bsi;
}

- (id)copyPropertyForKey:(id)a0;
- (void)registerNotificationBlock:(id /* block */)a0;
- (void)registerNotificationBlock:(id /* block */)a0 forProperties:(id)a1;
- (BOOL)isAlsSupported;
- (void)dealloc;
- (id)init;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;

@end
