@class HKSPChangeSet, NSString, NSSet, NSDate, NSNumber;

@interface HKSPMutableAlarmConfiguration : HKSPAlarmConfiguration <HKSPMutableObject>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) BOOL allowsSnooze;
@property (copy, nonatomic) NSString *toneIdentifier;
@property (copy, nonatomic) NSString *vibrationIdentifier;
@property (copy, nonatomic) NSNumber *soundVolume;
@property (copy, nonatomic) NSDate *lastModifiedDate;
@property (readonly, nonatomic) HKSPChangeSet *changeSet;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) NSSet *significantChanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)playOptions;
- (id)init;
- (id)mutableCopy;
- (void).cxx_destruct;
- (void)setPlayOptions:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)freeze;
- (id)initWithTemplateAlarmConfiguration:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
