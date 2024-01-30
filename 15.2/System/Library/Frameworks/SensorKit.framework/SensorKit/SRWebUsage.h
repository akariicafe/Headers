@class NSString;

@interface SRWebUsage : NSObject <SRSampleExporting, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property double totalUsageTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)webUsageWithTotalUsageTime:(double)a0;

- (id)sr_dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
