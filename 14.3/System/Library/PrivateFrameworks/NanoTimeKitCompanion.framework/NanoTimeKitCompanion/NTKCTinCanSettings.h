@interface NTKCTinCanSettings : NSObject

@property (readonly, nonatomic) BOOL tinCanEnabled;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)_handlePrefsChanged;
- (void)_notifyClientsOfChange;
- (void)_readValue;

@end
