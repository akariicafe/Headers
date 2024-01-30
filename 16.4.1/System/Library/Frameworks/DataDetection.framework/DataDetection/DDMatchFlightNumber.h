@class NSString;

@interface DDMatchFlightNumber : DDMatch

@property (readonly, nonatomic) NSString *airline;
@property (readonly, nonatomic) NSString *flightNumber;

- (void).cxx_destruct;
- (id)initWithDDScannerResult:(id)a0;

@end
