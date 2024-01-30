@class BRCItemID;

@interface BRCFSEventToSyncUpEvent : BRCEventMetric

@property (nonatomic) unsigned long long fileID;
@property (nonatomic) unsigned int genID;
@property (retain, nonatomic) BRCItemID *itemID;
@property (nonatomic) unsigned long long mtime;
@property (nonatomic) BOOL isPackage;
@property (nonatomic) unsigned long long syncUpBatchSize;
@property (nonatomic) unsigned long long contentSize;

- (id)additionalPayload;
- (void).cxx_destruct;
- (id)associatedAppTelemetryEvent;
- (id)subDescription;

@end
