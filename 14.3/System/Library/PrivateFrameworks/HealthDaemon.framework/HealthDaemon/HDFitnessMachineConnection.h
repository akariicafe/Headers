@class NSUUID;
@protocol HKFitnessMachineConnectionClientInterface;

@interface HDFitnessMachineConnection : NSObject

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) id<HKFitnessMachineConnectionClientInterface> client;

- (void).cxx_destruct;
- (id)initWithUUID:(id)a0 client:(id)a1;

@end
