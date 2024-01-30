@interface CDDebug : NSObject {
    BOOL verboseMode;
}

- (id)init;
- (void)log:(const char *)a0;
- (void)error:(long long)a0;
- (id)initWithVerboseMode:(BOOL)a0;

@end
