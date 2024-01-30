@class NSString, NSDate;

@interface FCCMoveModeContent : NSObject <FCCDataSerializable>

@property (readonly, nonatomic) long long notificationType;
@property (readonly, nonatomic) long long nextActivityMoveMode;
@property (readonly, nonatomic) NSDate *nextActivityMoveModeStartDate;
@property (readonly, nonatomic) double delay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)transportData;
- (id)initWithTransportData:(id)a0;
- (void).cxx_destruct;
- (id)initWithNotificationType:(long long)a0 nextActivityMoveMode:(long long)a1 nextActivityMoveModeStartDate:(id)a2 delay:(double)a3;

@end
