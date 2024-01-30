@interface MXPreferredVolumeManager : NSObject

+ (id)sharedInstance;

- (void)postNotification:(id)a0 category:(id)a1 mode:(id)a2 volume:(id)a3 reason:(id)a4 refCon:(id)a5 sequenceNumber:(long long)a6;
- (void)dealloc;
- (id)init;

@end
