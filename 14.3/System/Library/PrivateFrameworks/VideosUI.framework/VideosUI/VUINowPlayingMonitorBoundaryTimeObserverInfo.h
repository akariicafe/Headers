@class NSUUID;

@interface VUINowPlayingMonitorBoundaryTimeObserverInfo : NSObject

@property (nonatomic) double time;
@property (nonatomic) BOOL notifiedOfEntry;
@property (retain, nonatomic) NSUUID *token;
@property (copy, nonatomic) id /* block */ handler;

- (void).cxx_destruct;

@end
