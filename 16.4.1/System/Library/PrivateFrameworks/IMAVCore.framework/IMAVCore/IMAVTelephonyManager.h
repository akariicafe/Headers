@interface IMAVTelephonyManager : NSObject

@property (class, readonly, nonatomic) IMAVTelephonyManager *sharedInstance;

- (void)dealloc;
- (id)init;
- (void)_chatStateChanged:(id)a0;

@end
