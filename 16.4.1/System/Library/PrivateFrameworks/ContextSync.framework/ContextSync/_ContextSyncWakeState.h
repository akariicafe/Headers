@class NSNumber, NSDate;

@interface _ContextSyncWakeState : NSObject

@property (retain, nonatomic) NSNumber *wakeState;
@property (retain, nonatomic) NSDate *lastChangedDate;

+ (id)wakeState:(BOOL)a0;

- (void).cxx_destruct;

@end
