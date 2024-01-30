@class DNDConfiguration, NSArray, DNDMode, NSDate;

@interface DNDMutableModeConfiguration : DNDModeConfiguration

@property (copy, nonatomic) DNDMode *mode;
@property (copy, nonatomic) DNDConfiguration *configuration;
@property (copy, nonatomic) NSArray *triggers;
@property (nonatomic) unsigned long long impactsAvailability;
@property (nonatomic) unsigned long long dimsLockScreen;
@property (copy, nonatomic) NSDate *created;
@property (copy, nonatomic) NSDate *lastModified;
@property (nonatomic, getter=isAutomaticallyGenerated) BOOL automaticallyGenerated;

- (void)setCreated:(id)a0;
- (void)setLastModified:(id)a0;
- (void)setTriggers:(id)a0;
- (void)setMode:(id)a0;
- (void)setDimsLockScreen:(unsigned long long)a0;
- (void)setConfiguration:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setAutomaticallyGenerated:(BOOL)a0;
- (void)setImpactsAvailability:(unsigned long long)a0;

@end
