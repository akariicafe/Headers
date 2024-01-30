@class NSNumber, NSString;

@interface SASportsBaseballMatchup : SASportsMatchup

@property (copy, nonatomic) NSNumber *awayErrors;
@property (copy, nonatomic) NSNumber *awayHits;
@property (copy, nonatomic) NSNumber *balls;
@property (copy, nonatomic) NSNumber *homeErrors;
@property (copy, nonatomic) NSNumber *homeHits;
@property (copy, nonatomic) NSString *inningStatus;
@property (copy, nonatomic) NSNumber *onFirst;
@property (copy, nonatomic) NSNumber *onSecond;
@property (copy, nonatomic) NSNumber *onThird;
@property (copy, nonatomic) NSNumber *outs;
@property (copy, nonatomic) NSNumber *strikes;

+ (id)baseballMatchup;
+ (id)baseballMatchupWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
