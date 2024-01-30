@class NSString;

@interface CUIPSDLayer : NSObject

@property (nonatomic) double opacity;
@property (nonatomic) int blendMode;
@property (retain, nonatomic) NSString *name;

- (id)init;
- (void)dealloc;

@end
