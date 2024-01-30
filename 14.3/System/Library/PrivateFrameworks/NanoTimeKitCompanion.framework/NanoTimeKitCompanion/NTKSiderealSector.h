@class NTKSiderealSolarEvent, NSString;

@interface NTKSiderealSector : NSObject <NSSecureCoding> {
    NSString *_localizedName;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NTKSiderealSolarEvent *startingEvent;
@property (retain, nonatomic) NTKSiderealSolarEvent *endingEvent;
@property (nonatomic) void /* unknown type, empty encoding */ gradientStartPoint;
@property (nonatomic) void /* unknown type, empty encoding */ gradientEndPoint;

- (void).cxx_destruct;
- (id)localizedName;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithStartingEvent:(id)a0 endingEvent:(id)a1;

@end
