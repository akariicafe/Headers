@class HMUserCloudShareRepairInfo;

@interface HMDUserCloudShareRepairRequest : HMDUserCloudShareRequest

@property (readonly) HMUserCloudShareRepairInfo *repairInfo;

- (void).cxx_destruct;
- (id)description;
- (id)initWithStartDate:(id)a0 containerID:(id)a1 home:(id)a2 repairInfo:(id)a3;

@end
