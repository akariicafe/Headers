@class TVRCDeviceQuery, NSMutableDictionary, NSString;
@protocol TVRUIDeviceSearchDelegate;

@interface TVRUICoreDeviceQuery : NSObject <TVRCDeviceQueryDelegate, TVRUIDeviceQuery>

@property (weak, nonatomic) id<TVRUIDeviceSearchDelegate> delegate;
@property (retain, nonatomic) TVRCDeviceQuery *query;
@property (retain, nonatomic) NSMutableDictionary *deviceList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)hasStarted;
- (void)startQuery:(id)a0;
- (void)stop;
- (void)deviceQueryDidUpdateDevices:(id)a0;

@end
