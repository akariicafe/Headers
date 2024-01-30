@interface PXBackgroundFetchToken : NSObject {
    BOOL _finished;
}

- (void)finish;
- (id)init;
- (void)dealloc;

@end
