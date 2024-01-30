@interface GKGradient : NSObject {
    struct CGGradient { } *_CGGradient;
}

+ (id)gradientWithColors:(id)a0 atLocations:(const double *)a1;

- (struct CGGradient { } *)CGGradient;
- (void)dealloc;
- (id)initWithColors:(id)a0 atLocations:(const double *)a1;

@end
