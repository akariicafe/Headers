@class NSDate;

@interface ARRenderSyncSchedulerBlockWrapper : NSObject

@property (retain, nonatomic) NSDate *entryTimestamp;
@property (copy, nonatomic) id /* block */ block;

- (void).cxx_destruct;

@end
