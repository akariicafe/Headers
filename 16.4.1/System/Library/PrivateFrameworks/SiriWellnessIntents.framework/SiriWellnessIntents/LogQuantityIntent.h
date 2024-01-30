@class NSString, NSDate;

@interface LogQuantityIntent : INIntent

@property (nonatomic, copy) NSString *quantityIdentifier;
@property (nonatomic, copy) NSDate *start;
@property (nonatomic, copy) NSDate *end;
@property (nonatomic) double value;
@property (nonatomic, copy) NSString *units;

- (id)initWithCoder:(id)a0;
- (id)init;

@end
