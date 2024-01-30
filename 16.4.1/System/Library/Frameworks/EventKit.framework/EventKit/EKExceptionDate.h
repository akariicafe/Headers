@class NSDate;

@interface EKExceptionDate : EKObject

@property (retain, nonatomic) NSDate *date;

+ (Class)frozenClass;
+ (id)knownIdentityKeysForComparison;

- (id)description;
- (id)initWithDate:(id)a0;

@end
