@class NSDate;

@interface EKExceptionDate : EKObject

@property (retain, nonatomic) NSDate *date;

+ (id)knownIdentityKeysForComparison;
+ (Class)frozenClass;

- (id)initWithDate:(id)a0;
- (id)description;

@end
