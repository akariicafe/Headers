@class NSMutableArray;

@interface PLMoviePlayerControllerManager : NSObject {
    NSMutableArray *_playerStack;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void)moveControllerToTopOfStack:(id)a0;
- (void)removeControllerFromStack:(id)a0;

@end
