@class PLSmartPLService, PLEntryNotificationOperatorComposition, NSDate, PLTelephonyConnection;

@interface BBSmartPL : NSObject

@property (weak) PLSmartPLService *operator;
@property (retain) PLEntryNotificationOperatorComposition *bbHwOtherCallback;
@property (retain) NSDate *lastLogDate;
@property double logDuration;
@property double cxoDuration;
@property (weak) PLTelephonyConnection *connection;

- (void).cxx_destruct;
- (void)handleMavBBHwOtherCallback:(id)a0;
- (void)startWithOperator:(id)a0;
- (void)triggerBBCoreDump;

@end
