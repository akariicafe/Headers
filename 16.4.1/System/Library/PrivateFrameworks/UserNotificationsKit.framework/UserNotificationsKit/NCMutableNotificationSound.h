@class NSString, NSDictionary, TLAlertConfiguration;

@interface NCMutableNotificationSound : NCNotificationSound

@property (nonatomic) long long soundType;
@property (nonatomic) unsigned int systemSoundID;
@property (nonatomic) unsigned long long soundBehavior;
@property (copy, nonatomic) NSString *ringtoneName;
@property (copy, nonatomic) NSDictionary *vibrationPattern;
@property (nonatomic, getter=isRepeating) BOOL repeats;
@property (nonatomic) double maxDuration;
@property (copy, nonatomic) NSDictionary *controllerAttributes;
@property (copy, nonatomic) NSString *songPath;
@property (copy, nonatomic) TLAlertConfiguration *alertConfiguration;

- (void)setRepeats:(BOOL)a0;
- (void)setSongPath:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setSoundBehavior:(unsigned long long)a0;
- (void)setSystemSoundID:(unsigned int)a0;
- (void)setSoundType:(long long)a0;
- (void)setVibrationPattern:(id)a0;
- (void)setMaxDuration:(double)a0;
- (void)setAlertConfiguration:(id)a0;
- (void)setRingtoneName:(id)a0;
- (void)setControllerAttributes:(id)a0;

@end
