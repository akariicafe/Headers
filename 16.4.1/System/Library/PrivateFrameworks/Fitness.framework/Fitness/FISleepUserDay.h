@class NSDate;

@interface FISleepUserDay : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSDate *startOfDay;
@property (copy, nonatomic) NSDate *endOfDay;

- (BOOL)isEmpty;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStartOfDay:(id)a0 endOfDay:(id)a1;
- (void).cxx_destruct;
- (id)initEmptySleepUserDay;

@end
