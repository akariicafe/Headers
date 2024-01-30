@class NSObject;
@protocol OS_dispatch_source;

@interface TLAlertContext : NSObject

@property (nonatomic) long long playbackBackEnd;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timeoutTimerSource;
@property (nonatomic, getter=isBeingInterrupted) BOOL beingInterrupted;

- (void).cxx_destruct;

@end
