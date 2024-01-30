@class NSString;

@interface DDMatchShipmentTrackingNumber : DDMatch

@property (readonly, nonatomic) NSString *carrier;
@property (readonly, nonatomic) NSString *trackingNumber;

- (void).cxx_destruct;
- (id)initWithDDScannerResult:(id)a0;

@end
