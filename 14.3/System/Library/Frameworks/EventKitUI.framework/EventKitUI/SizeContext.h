@class NSMutableArray;

@interface SizeContext : NSObject {
    NSMutableArray *_windowContextStack;
}

+ (id)sharedInstance;

- (id)init;
- (void)popContextFromWindow:(id)a0;
- (void).cxx_destruct;
- (id)windowForCurrentContext;
- (void)pushContextWithWindow:(id)a0;
- (BOOL)hasWindowForCurrentContext;

@end
