@class NSData, NSDate;

@interface GEOPlannedDestination : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *arrivalDate;
@property (retain, nonatomic) NSDate *expirationDate;
@property (nonatomic) int transportType;
@property (readonly, nonatomic) NSData *handle;

- (void)encodeWithCoder:(id)a0;
- (id)initWithMapItem:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithCoordinate:(struct { double x0; double x1; })a0;
- (id)initWithMapItemHandle:(id)a0;

@end
