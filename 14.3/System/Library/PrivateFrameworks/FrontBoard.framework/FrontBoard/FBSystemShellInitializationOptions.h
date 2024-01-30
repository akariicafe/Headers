@interface FBSystemShellInitializationOptions : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) BOOL initializeReadyForInteraction;
@property (readonly, nonatomic) BOOL resetDarkBootState;
@property (readonly, nonatomic) BOOL shouldWaitForMigrator;
@property (readonly, nonatomic) double systemSleepInterval;
@property (readonly, copy, nonatomic) id /* block */ registerAdditionalServicesBlock;

- (id)_initWithOptions:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
