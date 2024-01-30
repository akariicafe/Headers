@interface IMAVTelephonyManager : NSObject

@property (class, readonly, nonatomic) IMAVTelephonyManager *sharedInstance;

- (id)init;
- (void)dealloc;
- (void)_chatStateChanged:(id)a0;

@end
