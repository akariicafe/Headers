@interface PXBackgroundFetchToken : NSObject {
    BOOL _finished;
}

- (void)finish;
- (void)dealloc;
- (id)init;

@end
