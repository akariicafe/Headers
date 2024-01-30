@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface ABCMaintenanceActivity : NSObject

@property (copy, nonatomic) id /* block */ activityBlock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *activityQueue;
@property (retain, nonatomic) NSString *activityIdentifier;

- (void).cxx_destruct;

@end
