@class NSDate;

@interface ASDSoftwareUpdateMetrics : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDate *lastUpdateCheck;
@property (copy, nonatomic) NSDate *nextUpdateCheck;
@property (nonatomic) BOOL usingModernUpdatesCheck;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
