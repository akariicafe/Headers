@class NSCondition, NSMutableArray, NSDate;

@interface AKFuture : NSObject

@property (nonatomic) BOOL resolved;
@property (nonatomic) double maxWait;
@property (retain, nonatomic) NSDate *beginDate;
@property (retain, nonatomic) NSCondition *valueCondition;
@property (retain, nonatomic) NSMutableArray *internalWrapper;

- (id)initWithMaxWait:(double)a0 description:(id)a1;
- (id)value;
- (id)init;
- (void).cxx_destruct;
- (void)setValue:(id)a0;

@end
