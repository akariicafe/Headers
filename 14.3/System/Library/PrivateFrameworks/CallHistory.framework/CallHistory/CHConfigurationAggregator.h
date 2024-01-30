@class NSArray, NSString, NSObject;
@protocol OS_dispatch_queue, CHConfigurationAggregatorDelegate;

@interface CHConfigurationAggregator : NSObject <CHConfigurationDelegate>

@property (readonly, copy, nonatomic) NSArray *configurations;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<CHConfigurationAggregatorDelegate> delegate;
@property (readonly, nonatomic, getter=isCloudKitEnabled) BOOL cloudKitEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
