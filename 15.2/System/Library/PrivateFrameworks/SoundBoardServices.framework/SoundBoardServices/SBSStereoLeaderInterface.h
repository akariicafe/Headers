@class NSXPCConnection;
@protocol SBSImplementer;

@interface SBSStereoLeaderInterface : NSObject {
    NSXPCConnection *_sbConnection;
    id<SBSImplementer> _sbProxy;
}

- (void)isFollower:(id /* block */)a0;
- (id)initWithTarget:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setDeviceAsStereoLeader:(BOOL)a0 withOptions:(id)a1;

@end
