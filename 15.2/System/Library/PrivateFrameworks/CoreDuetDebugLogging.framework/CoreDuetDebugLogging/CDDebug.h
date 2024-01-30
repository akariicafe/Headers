@interface CDDebug : NSObject {
    BOOL verboseMode;
}

- (void)log:(const char *)a0;
- (id)init;
- (void)error:(long long)a0;
- (id)initWithVerboseMode:(BOOL)a0;

@end
