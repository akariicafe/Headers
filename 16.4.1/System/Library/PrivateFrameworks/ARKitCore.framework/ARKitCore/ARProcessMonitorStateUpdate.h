@class NSString, RBSProcessStateUpdate;

@interface ARProcessMonitorStateUpdate : NSObject {
    RBSProcessStateUpdate *_update;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) long long taskState;
@property (readonly, nonatomic) long long debugState;
@property (readonly, nonatomic) BOOL isVisible;

- (id)description;
- (void).cxx_destruct;
- (id)initWithRBSProcessStateUpdate:(id)a0;

@end
