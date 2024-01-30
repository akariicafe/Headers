@class BMItem, NSDate;

@interface BMEvent : NSObject

@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly, copy, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) BMItem *item;

- (void).cxx_destruct;
- (id)description;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 item:(id)a2;

@end
