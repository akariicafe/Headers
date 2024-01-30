@class NSNumber;

@interface UARPUpdateFirmwareAnalyticsEventFrameworkParams : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSNumber *stagingUserInitiated;
@property (retain) NSNumber *stagingDuration;
@property (retain) NSNumber *stagingIterations;
@property (retain) NSNumber *stagingStatus;
@property (retain) NSNumber *stagingVendorError;
@property (retain) NSNumber *applyUserInitiated;
@property (retain) NSNumber *applyDuration;
@property (retain) NSNumber *applyStatus;
@property (retain) NSNumber *applyVendorError;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
