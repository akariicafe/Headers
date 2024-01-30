@class NSURL;

@interface AXMHapticOutputAction : AXMOutputAction {
    NSURL *_hapticFileURL;
}

@property (readonly, nonatomic) NSURL *hapticFileURL;
@property (nonatomic) double hapticIntensity;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (id)_initWithURL:(id)a0 handle:(id)a1;

@end
