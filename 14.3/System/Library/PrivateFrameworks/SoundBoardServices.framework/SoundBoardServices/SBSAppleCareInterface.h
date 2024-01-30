@class NSXPCConnection;
@protocol SBSAppleCareImplementer;

@interface SBSAppleCareInterface : NSObject {
    NSXPCConnection *_sbConnection;
    id<SBSAppleCareImplementer> _sbProxy;
}

- (id)initWithTarget:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setAppleCareIsEnabled:(BOOL)a0 withOptions:(id)a1;

@end
