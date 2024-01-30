@class NSNumber, NSDate;

@interface IMMessageNotificationTimer : NSObject

@property (retain, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSNumber *numberDingsLeft;
@property (readonly, nonatomic) BOOL areDingsRemaining;

- (void)reduceNumberDingsLeft;
- (id)initWithDate:(id)a0;
- (void)dealloc;

@end
