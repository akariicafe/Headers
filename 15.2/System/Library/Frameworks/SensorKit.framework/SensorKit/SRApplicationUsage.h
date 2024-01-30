@class NSString, NSMutableArray, NSArray;

@interface SRApplicationUsage : NSObject <SRSampleExporting, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *bundleIdentifier;
@property double usageTime;
@property (copy) NSString *reportApplicationIdentifier;
@property (retain) NSMutableArray *mutableTextInputSessions;
@property (readonly, copy) NSArray *textInputSessions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)applicationUsageWithBundleIdentifier:(id)a0 reportApplicationIdentifier:(id)a1 totalUsageTime:(double)a2;

- (id)sr_dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
