@class NSString;

@interface DDMatchPostalAddress : DDMatch

@property (readonly, nonatomic) NSString *street;
@property (readonly, nonatomic) NSString *city;
@property (readonly, nonatomic) NSString *state;
@property (readonly, nonatomic) NSString *postalCode;
@property (readonly, nonatomic) NSString *country;

- (id)initWithDDScannerResult:(id)a0;
- (void).cxx_destruct;

@end
