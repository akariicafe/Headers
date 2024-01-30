@class NSString;
@protocol TVRUIDeviceDelegate;

@interface TVRUIUnpairedDevices : NSObject <TVRUIDevice>

@property (weak, nonatomic) id<TVRUIDeviceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isPaired;
- (void)connect;
- (id)model;
- (BOOL)isConnecting;
- (BOOL)isConnected;
- (id)name;
- (BOOL)isEqualToDevice:(id)a0;
- (id)identifier;
- (BOOL)supportsTouchEvents;
- (void)disconnectUserInitiated;
- (void)disconnectSystemInitiated;
- (BOOL)supportsDonatingIntents;
- (BOOL)hasIdentifier:(id)a0;
- (void)disconnectWithTimeOut;

@end
