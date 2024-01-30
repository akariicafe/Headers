@interface PSIDate : NSObject

@property (readonly) long long era;
@property (readonly) long long year;
@property (readonly) long long month;
@property (readonly) long long day;
@property (readonly) long long int64Representation;
@property (readonly) long long int64RepresentationMask;

+ (id)distantFuture;
+ (id)distantPast;

- (id)dateComponents;
- (id)initWithInt64Representation:(long long)a0;
- (id)description;
- (id)initWithDateComponents:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithUniversalDate:(id)a0 calendar:(id)a1;
- (unsigned long long)hash;

@end
