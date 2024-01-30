@class NSMutableArray;

@interface SizeContext : NSObject {
    NSMutableArray *_windowContextStack;
}

+ (id)sharedInstance;

- (void)popContextFromWindow:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)windowForCurrentContext;
- (void)pushContextWithWindow:(id)a0;
- (BOOL)hasWindowForCurrentContext;

@end
