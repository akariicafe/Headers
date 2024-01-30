@class DNDConfiguration, NSArray, NSString, DNDMode, NSDate;

@interface DNDModeConfiguration : NSObject <DNDDiffBuilding, NSCopying, NSMutableCopying, NSSecureCoding> {
    BOOL _hasSecureData;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) DNDMode *mode;
@property (readonly, copy, nonatomic) DNDConfiguration *configuration;
@property (readonly, copy, nonatomic) NSArray *triggers;
@property (readonly, nonatomic) unsigned long long impactsAvailability;
@property (readonly, nonatomic) unsigned long long dimsLockScreen;
@property (readonly, nonatomic) unsigned long long allowSmartEntry;
@property (readonly, copy, nonatomic) NSDate *lastModified;
@property (readonly, copy, nonatomic) NSDate *created;
@property (readonly, nonatomic, getter=isAutomaticallyGenerated) BOOL automaticallyGenerated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultModeConfiguration;

- (id)shortDescription;
- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)log:(id)a0 withMessage:(id)a1;
- (BOOL)hasSecureData;
- (void)diffAgainstObject:(id)a0 usingDiffBuilder:(id)a1 withDescription:(id)a2;
- (id)initWithMode:(id)a0 configuration:(id)a1 triggers:(id)a2;
- (id)initWithMode:(id)a0 configuration:(id)a1 triggers:(id)a2 impactsAvailability:(unsigned long long)a3 dimsLockScreen:(unsigned long long)a4 created:(id)a5 lastModified:(id)a6 automaticallyGenerated:(BOOL)a7;
- (BOOL)_containsSecureTriggers:(id)a0;
- (id)_initWithModeConfiguration:(id)a0;
- (unsigned long long)allowSmartEntry;
- (id)mergeWithModeConfiguration:(id)a0;

@end
