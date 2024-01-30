@class NSNumber, NSString;

@interface WFHotspotDetails : NSObject

@property (retain, nonatomic) NSNumber *batteryLife;
@property (copy, nonatomic) NSString *cellularProtocolString;
@property (retain, nonatomic) NSNumber *signalStrength;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqualHotspotDetails:(id)a0;

@end
