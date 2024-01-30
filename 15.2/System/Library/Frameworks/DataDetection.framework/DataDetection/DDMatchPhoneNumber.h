@class NSString;

@interface DDMatchPhoneNumber : DDMatch

@property (readonly, nonatomic) NSString *phoneNumber;
@property (readonly, nonatomic) NSString *label;

- (id)initWithDDScannerResult:(id)a0;
- (void).cxx_destruct;

@end
