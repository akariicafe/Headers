@class NSString;

@interface DDMatchFlightNumber : DDMatch

@property (readonly, nonatomic) NSString *airline;
@property (readonly, nonatomic) NSString *flightNumber;

- (id)initWithDDScannerResult:(id)a0;
- (void).cxx_destruct;

@end
