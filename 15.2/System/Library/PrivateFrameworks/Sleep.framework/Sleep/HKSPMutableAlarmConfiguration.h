@class HKSPChangeSet, NSString, NSSet, NSDictionary, NSDate, NSNumber;
@protocol HKSPObject;

@interface HKSPMutableAlarmConfiguration : HKSPAlarmConfiguration <HKSPMutableObject>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) BOOL allowsSnooze;
@property (copy, nonatomic) NSString *toneIdentifier;
@property (copy, nonatomic) NSString *vibrationIdentifier;
@property (copy, nonatomic) NSNumber *soundVolume;
@property (copy, nonatomic) NSDate *lastModifiedDate;
@property (readonly, nonatomic) HKSPChangeSet *changeSet;
@property (readonly, nonatomic) id<HKSPObject> originalObject;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) NSSet *significantChanges;
@property (readonly, nonatomic) NSDictionary *relationshipChanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void)freeze;
- (id)mutableCopy;
- (void)setPlayOptions:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)playOptions;
- (id)initWithTemplateAlarmConfiguration:(id)a0;

@end
