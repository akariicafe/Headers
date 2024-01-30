@interface UMLog : NSObject

@property (nonatomic) unsigned long long type;

+ (id)debug;
+ (id)info;
+ (id)fault;
+ (id)standard;
+ (id)error;

- (void)logMessage:(id)a0;
- (void)logPrivateFormat:(id)a0;
- (void)logPublicFormat:(id)a0;

@end
