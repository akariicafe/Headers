@class NSNumber, NSString;

@interface WFHotspotDetails : NSObject

@property (retain, nonatomic) NSNumber *batteryLife;
@property (copy, nonatomic) NSString *cellularProtocolString;
@property (retain, nonatomic) NSNumber *signalStrength;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualHotspotDetails:(id)a0;

@end
