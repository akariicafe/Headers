@class NSString, MPRestrictionsMonitor;

@interface MusicKit_SoftLinking_MPRestrictionsMonitor : NSObject {
    MPRestrictionsMonitor *_underlyingRestrictionsMonitor;
}

@property (class, readonly, nonatomic) MusicKit_SoftLinking_MPRestrictionsMonitor *sharedRestrictionsMonitor;
@property (class, readonly, nonatomic) NSString *allowsExplicitContentDidChangeNotification;

@property (readonly, nonatomic) BOOL allowsDeletion;
@property (readonly, nonatomic) BOOL allowsExplicitContent;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_handleAllowsExplicitContentDidChangeNotification:(id)a0;
- (id)_initWithUnderlyingRestrictionsMonitor:(id)a0;

@end
