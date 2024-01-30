@interface ICAttributionsUpdater : NSObject {
    void /* unknown type, empty encoding */ filter;
}

@property (class, nonatomic, readonly) double sidebarOpenedRenderDelay;
@property (class, nonatomic, readonly) double sidebarClosedRenderDelay;

@property (nonatomic, readonly) void /* unknown type, empty encoding */ layoutManager;
@property (nonatomic) void /* unknown type, empty encoding */ isSidebarHidden;

- (id)init;
- (void).cxx_destruct;

@end
