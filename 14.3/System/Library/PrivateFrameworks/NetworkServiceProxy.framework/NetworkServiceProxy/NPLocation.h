@class NSDate;

@interface NPLocation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) BOOL isValid;
@property double latitude;
@property double longtitude;
@property (retain, nonatomic) NSDate *timestamp;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLatitude:(double)a0 longtitude:(double)a1 timestamp:(id)a2;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
