@class NSURL, NSArray;

@interface PSYOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSURL *activityInfoDirectory;
@property (nonatomic, getter=shouldResetDeviceSyncState) BOOL resetDeviceSyncState;
@property (nonatomic) BOOL dryRun;
@property (nonatomic) unsigned long long terminationJobCount;
@property (copy, nonatomic) NSArray *testInputs;
@property (copy, nonatomic) NSArray *jobs;
@property (nonatomic) unsigned long long syncSessionType;
@property (nonatomic, getter=shouldResumePendingJobs) BOOL resumePendingJobs;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
