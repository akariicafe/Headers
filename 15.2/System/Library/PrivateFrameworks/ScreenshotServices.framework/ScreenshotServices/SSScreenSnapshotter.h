@class UIScreen;

@interface SSScreenSnapshotter : NSObject

@property (readonly, nonatomic) UIScreen *screen;

+ (id)snapshotterForScreen:(id)a0;

- (id)takeScreenshot;
- (void).cxx_destruct;
- (id)initWithScreen:(id)a0;

@end
