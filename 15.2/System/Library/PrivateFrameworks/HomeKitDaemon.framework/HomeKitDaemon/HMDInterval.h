@class NSNumber, NSString;

@interface HMDInterval : HMFObject

@property (class, readonly) NSNumber *negativeInfinityStart;
@property (class, readonly) NSNumber *positiveInfinityEnd;

@property (readonly) NSString *standardIntervalString;
@property (readonly) NSString *negativeInfinityIntervalString;
@property (readonly) NSString *positiveInfinityIntervalString;
@property (readonly) NSString *allNumbersIntervalString;
@property (readonly) NSNumber *start;
@property (readonly) NSNumber *end;

+ (void)initialize;
+ (id)openOpenIntervalFromStart:(id)a0 toEnd:(id)a1;
+ (id)openClosedIntervalFromStart:(id)a0 toEnd:(id)a1;
+ (id)closedOpenIntervalFromStart:(id)a0 toEnd:(id)a1;
+ (id)closedClosedIntervalFromStart:(id)a0 toEnd:(id)a1;
+ (id)intervalForSingleValue:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)labelString;
- (id)initFromStart:(id)a0 toEnd:(id)a1;

@end
