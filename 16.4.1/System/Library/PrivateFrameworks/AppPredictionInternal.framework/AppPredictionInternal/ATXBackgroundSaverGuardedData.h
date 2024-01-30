@class NSObject;
@protocol OS_dispatch_source;

@interface ATXBackgroundSaverGuardedData : NSObject {
    NSObject<OS_dispatch_source> *timer;
}

- (void).cxx_destruct;

@end
