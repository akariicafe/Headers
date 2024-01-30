@class NSData, NSDate;

@interface GEOPlannedDestination : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *arrivalDate;
@property (retain, nonatomic) NSDate *expirationDate;
@property (nonatomic) int transportType;
@property (readonly, nonatomic) NSData *handle;

- (id)initWithCoordinate:(struct { double x0; double x1; })a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithMapItemHandle:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithMapItem:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
