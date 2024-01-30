@class NSMutableArray;

@interface SizeContext : NSObject {
    NSMutableArray *_windowContextStack;
}

+ (id)sharedInstance;

- (void)popContextFromWindow:(id)a0;
- (id)windowForCurrentContext;
- (id)init;
- (BOOL)hasWindowForCurrentContext;
- (void)pushContextWithWindow:(id)a0;
- (void).cxx_destruct;

@end
