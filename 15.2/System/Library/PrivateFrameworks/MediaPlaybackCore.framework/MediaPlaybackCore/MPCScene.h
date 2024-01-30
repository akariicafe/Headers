@interface MPCScene : NSObject

@property (nonatomic) long long startFrame;
@property (nonatomic) long long endFrame;
@property (nonatomic) long long iterations;

- (id)init;

@end
