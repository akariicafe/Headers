@class NSURL, NSBundle;

@interface ASKCellularDataInquiry : NSObject

@property (class, readonly) NSURL *settingsURL;

@property (readonly, nonatomic) NSBundle *bundle;
@property (readonly, nonatomic) BOOL isSupported;
@property (readonly, nonatomic) BOOL isEnabledForDevice;
@property (readonly, nonatomic) BOOL isEnabledForBundle;

- (id)initWithBundle:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
