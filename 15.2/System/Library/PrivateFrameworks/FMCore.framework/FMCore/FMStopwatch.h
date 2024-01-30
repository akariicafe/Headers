@class NSString;

@interface FMStopwatch : NSObject

@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *comment;
@property (nonatomic) unsigned long long startTime;
@property (nonatomic) unsigned long long endTime;

+ (void)initialize;
+ (void)dumpBuffer:(id)a0;
+ (void)eventWithLabel:(id)a0 comment:(id)a1;
+ (id)illegalLabelCharacterSet;
+ (id)stopwatchWithLabel:(id)a0;
+ (void)eventWithLabel:(id)a0;

- (id)initWithLabel:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)stop;
- (id)descriptionAsData;
- (void)stopWithComment:(id)a0;

@end
