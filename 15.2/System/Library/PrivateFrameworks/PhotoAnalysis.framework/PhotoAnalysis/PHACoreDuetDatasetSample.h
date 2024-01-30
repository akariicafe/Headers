@class NSString, NSDate;

@interface PHACoreDuetDatasetSample : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSDate *date;
@property (copy, nonatomic) NSString *subset;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 andDate:(id)a1 forSubset:(id)a2;

@end
