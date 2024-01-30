@interface _NSURLBDOnce : NSObject {
    id /* block */ fBlock;
    BOOL fDone;
}

- (void)dealloc;

@end
