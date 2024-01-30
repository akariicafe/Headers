@interface _IDSCurrentServerTimeProvider : NSObject <IDSCurrentServerTimeProvider>

@property (readonly, nonatomic) id apsConnection;

- (unsigned long long)serverTimeInNanoSeconds;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isAccurate;

@end
