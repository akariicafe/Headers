@class NSDate;

@interface EKExceptionDate : EKObject

@property (retain, nonatomic) NSDate *date;

+ (Class)frozenClass;
+ (id)knownIdentityKeysForComparison;

- (id)initWithDate:(id)a0;
- (id)description;

@end
