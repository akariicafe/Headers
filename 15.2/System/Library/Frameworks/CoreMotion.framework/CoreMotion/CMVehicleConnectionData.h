@class NSDate;

@interface CMVehicleConnectionData : NSObject <NSSecureCoding, NSCopying> {
    NSDate *fStartDate;
    NSDate *fEndDate;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;

- (id)initWithStartDate:(double)a0 endDate:(double)a1;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
