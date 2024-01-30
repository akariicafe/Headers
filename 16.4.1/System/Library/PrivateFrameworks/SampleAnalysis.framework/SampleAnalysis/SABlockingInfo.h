@class NSString;

@interface SABlockingInfo : NSObject

@property (readonly) unsigned long long blockingTid;
@property (readonly) int blockingPid;
@property (readonly) NSString *portName;
@property (readonly) unsigned long long portFlags;
@property (readonly) unsigned long long portDomain;

- (id)_init;
- (id)init;
- (BOOL)hasMatchingBlocker:(id)a0;

@end
