@interface TRITaskSupport : NSObject <TRITaskSetProviding>

+ (id)sharedInstance;

- (Class)taskClassForTaskType:(int)a0;
- (id)XPCTaskWhitelist;

@end
