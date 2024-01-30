@class NSURL;

@interface AXMHapticOutputAction : AXMOutputAction {
    NSURL *_hapticFileURL;
}

@property (readonly, nonatomic) NSURL *hapticFileURL;
@property (nonatomic) double hapticIntensity;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)_initWithURL:(id)a0 handle:(id)a1;

@end
