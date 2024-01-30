@class FBSystemShellInitializationOptions;

@interface FBSystemShellInitializationContext : NSObject <NSCopying> {
    BOOL _bootedDark;
}

@property (readonly, nonatomic) FBSystemShellInitializationOptions *options;
@property (readonly, nonatomic) unsigned long long lastExitReason;
@property (readonly, nonatomic, getter=wasBootedDark) BOOL bootedDark;

- (id)_initWithOptions:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
