@class NSString, WAEndReason;

@interface WASessionEndData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) WAEndReason *endReason;

- (id)toDict;
- (id)initWithEndReason:(id)a0;
- (void).cxx_destruct;

@end
