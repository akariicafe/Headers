@class NSString, NSDate;

@interface PPScoredEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) double score;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 title:(id)a2 score:(double)a3;

@end
