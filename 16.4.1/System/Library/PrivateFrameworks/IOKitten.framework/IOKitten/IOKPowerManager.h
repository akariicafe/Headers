@interface IOKPowerManager : NSObject {
    unsigned int _connection;
}

+ (id)powerManager;
+ (BOOL)isSleepEnabled;

- (void)dealloc;
- (id)init;
- (BOOL)sleepSystemWithError:(id *)a0;

@end
