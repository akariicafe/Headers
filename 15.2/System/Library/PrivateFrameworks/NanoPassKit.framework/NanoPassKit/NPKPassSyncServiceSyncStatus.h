@class NSDate, NPKPassSyncChange;

@interface NPKPassSyncServiceSyncStatus : NSObject

@property (retain, nonatomic) NPKPassSyncChange *lastKnownOutgoingChange;
@property (retain, nonatomic) NSDate *outgoingChangeDate;
@property (retain, nonatomic) NPKPassSyncChange *lastKnownIncomingChange;
@property (retain, nonatomic) NSDate *incomingChangeDate;

- (void).cxx_destruct;
- (void)reset;
- (BOOL)shouldSyncWithCurrentIncomingChange:(id)a0 currentOutgoingChange:(id)a1 currentDate:(id)a2;

@end
