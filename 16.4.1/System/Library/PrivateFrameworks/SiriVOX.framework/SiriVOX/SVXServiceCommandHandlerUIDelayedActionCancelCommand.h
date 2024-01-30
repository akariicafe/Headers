@class NSString, SVXServiceCommandDelayedActionStore;
@protocol SVXPerforming;

@interface SVXServiceCommandHandlerUIDelayedActionCancelCommand : NSObject <SVXServiceCommandHandling> {
    SVXServiceCommandDelayedActionStore *_delayedActionStore;
    id<SVXPerforming> _performer;
}

@property (class, readonly, nonatomic) Class supportedCommandClass;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
