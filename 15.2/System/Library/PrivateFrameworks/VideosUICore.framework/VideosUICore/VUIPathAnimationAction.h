@class CABasicAnimation, NSString;

@interface VUIPathAnimationAction : NSObject <CAAction>

@property (retain, nonatomic) CABasicAnimation *animationToRun;
@property (nonatomic) const struct CGPath { } *fromPath;
@property (retain, nonatomic) NSString *key;

- (void)runActionForKey:(id)a0 object:(id)a1 arguments:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;

@end
