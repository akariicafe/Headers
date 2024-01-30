@class NSString, AVPlayer, NSURL;

@interface SKVideoNode : SKNode {
    void *_skcVideoNode;
    BOOL _isUsingKVO;
    NSString *_videoFileName;
    NSURL *_videoFileURL;
    AVPlayer *_player;
}

@property (retain, nonatomic) AVPlayer *_player;
@property (nonatomic) struct CGSize { double x0; double x1; } size;
@property (nonatomic) struct CGPoint { double x0; double x1; } anchorPoint;

+ (BOOL)supportsSecureCoding;
+ (id)debugHierarchyPropertyDescriptions;
+ (id)debugHierarchyValueForPropertyWithName:(id)a0 onObject:(id)a1 outOptions:(id *)a2 outError:(id *)a3;
+ (id)videoNodeWithFileNamed:(id)a0;
+ (id)videoNodeWithURL:(id)a0;
+ (id)videoNodeWithVideoFileNamed:(id)a0;
+ (id)videoNodeWithVideoURL:(id)a0;
+ (id)videoNodeWithAVPlayer:(id)a0;

- (void)commonInit;
- (id)initWithURL:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)setPaused:(BOOL)a0;
- (id)init;
- (void)pause;
- (id)initWithCoder:(id)a0;
- (id)initWithVideoURL:(id)a0;
- (void)play;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (BOOL)isEqualToNode:(id)a0;
- (id)initWithFileNamed:(id)a0;
- (void *)_makeBackingNode;
- (void)_didMakeBackingNode;
- (id)initWithAVPlayer:(id)a0;
- (id)initWithVideoFileNamed:(id)a0;

@end
