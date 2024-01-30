@class NSString;

@interface DDMatchEmailAddress : DDMatch

@property (readonly, nonatomic) NSString *emailAddress;
@property (readonly, nonatomic) NSString *label;

- (void).cxx_destruct;
- (id)initWithDDScannerResult:(id)a0;

@end
