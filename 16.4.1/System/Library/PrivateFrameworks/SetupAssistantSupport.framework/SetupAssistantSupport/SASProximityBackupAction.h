@class NSError, NSDate;

@interface SASProximityBackupAction : SASProximityAction

@property BOOL shouldStartBackup;
@property BOOL finishedBackup;
@property (retain) NSError *error;
@property double percentComplete;
@property unsigned long long timeRemaining;
@property (retain) NSDate *completionDate;

+ (unsigned long long)actionID;
+ (id)actionFromDictionary:(id)a0;

- (void).cxx_destruct;
- (id)requestPayload;

@end
