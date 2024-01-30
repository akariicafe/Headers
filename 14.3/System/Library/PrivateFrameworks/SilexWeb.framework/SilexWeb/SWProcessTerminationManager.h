@class NSString, NSMutableArray;
@protocol SWErrorReporting, SWProcessTerminationPolicyDecider;

@interface SWProcessTerminationManager : NSObject <SWProcessTerminationManager>

@property (readonly, nonatomic) id<SWProcessTerminationPolicyDecider> throttler;
@property (readonly, nonatomic) id<SWErrorReporting> errorReporter;
@property (readonly, nonatomic) NSMutableArray *onRetryBlocks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
