@class NSString, NSDate;

@interface PPScoredEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) double score;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 title:(id)a2 score:(double)a3;
- (void)encodeWithCoder:(id)a0;

@end
