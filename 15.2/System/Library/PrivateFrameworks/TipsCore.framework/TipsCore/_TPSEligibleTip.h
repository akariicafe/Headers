@class NSString, NSDate;

@interface _TPSEligibleTip : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSDate *lastOfferedDate;
@property (copy, nonatomic) NSDate *lastEligibleDate;
@property (readonly, nonatomic) BOOL overrideFrequencyControl;

- (long long)compare:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (long long)eligibleDateCompare:(id)a0;
- (id)initWithIdentifier:(id)a0 lastEligibileDate:(id)a1 lastOfferedDate:(id)a2 overrideFrequencyControl:(BOOL)a3;

@end
