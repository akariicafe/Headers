@class NSString, NSMutableArray, NSArray;

@interface SRApplicationUsage : NSObject <SRSampleExporting, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *bundleIdentifier;
@property double usageTime;
@property (copy) NSString *reportApplicationIdentifier;
@property (retain) NSMutableArray *mutableTextInputSessions;
@property (retain) NSMutableArray *mutableSupplementalCategories;
@property (nonatomic) double relativeStartTime;
@property (readonly, copy) NSArray *textInputSessions;
@property (readonly, copy, nonatomic) NSArray *supplementalCategories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)applicationUsageWithBundleIdentifier:(id)a0 reportApplicationIdentifier:(id)a1 totalUsageTime:(double)a2 relativeStartTime:(double)a3;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)sr_dictionaryRepresentation;

@end
