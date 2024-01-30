@interface GKGradient : NSObject {
    struct CGGradient { } *_CGGradient;
}

+ (id)gradientWithColors:(id)a0 atLocations:(const double *)a1;

- (void)dealloc;
- (struct CGGradient { } *)CGGradient;
- (id)initWithColors:(id)a0 atLocations:(const double *)a1;

@end
