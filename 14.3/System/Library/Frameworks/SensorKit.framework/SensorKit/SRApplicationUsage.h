@class NSString;

@interface SRApplicationUsage : NSObject <SRSampleExporting, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *bundleIdentifier;
@property double usageTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)applicationUsageWithBundleIdentifier:(id)a0 totalUsageTime:(double)a1;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)sr_dictionaryRepresentation;

@end
