@class CDPEscrowRecordViability;

@interface CDPEscrowRecordReport : NSObject <CDPInitUnavailable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CDPEscrowRecordViability *accountViability;
@property (readonly, nonatomic) CDPEscrowRecordViability *deviceViability;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDefaultValues;
- (id)initWithDeviceStatus:(id)a0 accountStatus:(id)a1;
- (id)updatedReportWithRecord:(id)a0 isDeviceRecord:(BOOL)a1;
- (id)updatedReportWithViews:(id)a0 forDeviceRecord:(BOOL)a1;

@end
