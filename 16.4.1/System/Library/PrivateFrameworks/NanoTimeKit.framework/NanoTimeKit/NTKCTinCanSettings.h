@interface NTKCTinCanSettings : NSObject

@property (readonly, nonatomic) BOOL tinCanEnabled;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void)_notifyClientsOfChange;
- (void)_handlePrefsChanged;
- (void)_readValue;

@end
