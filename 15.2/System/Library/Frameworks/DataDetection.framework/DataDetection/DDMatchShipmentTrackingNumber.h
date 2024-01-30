@class NSString;

@interface DDMatchShipmentTrackingNumber : DDMatch

@property (readonly, nonatomic) NSString *carrier;
@property (readonly, nonatomic) NSString *trackingNumber;

- (id)initWithDDScannerResult:(id)a0;
- (void).cxx_destruct;

@end
