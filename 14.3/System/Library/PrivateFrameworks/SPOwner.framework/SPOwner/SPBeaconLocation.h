@class NSString, NSDate;

@interface SPBeaconLocation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDate *timestamp;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (copy, nonatomic) NSString *source;
@property (readonly, nonatomic) double horizontalAccuracy;

- (id)initWithTimestamp:(id)a0 latitude:(double)a1 longitude:(double)a2 horizontalAccuracy:(double)a3 source:(id)a4;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;

@end
