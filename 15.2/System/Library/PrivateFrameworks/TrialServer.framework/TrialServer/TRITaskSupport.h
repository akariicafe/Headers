@interface TRITaskSupport : NSObject <TRITaskSetProviding>

+ (id)sharedInstance;

- (id)XPCTaskWhitelist;
- (Class)taskClassForTaskType:(int)a0;

@end
