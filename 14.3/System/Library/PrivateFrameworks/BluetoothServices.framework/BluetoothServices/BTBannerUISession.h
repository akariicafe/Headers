@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface BTBannerUISession : NSObject {
    BOOL _bannerRunning;
    NSObject<OS_xpc_object> *_xpcConnection;
}

@property (copy, nonatomic) id /* block */ actionHandler;
@property (nonatomic) int backgroundColor;
@property (copy, nonatomic) NSString *centerContentText;
@property (copy, nonatomic) NSString *centerContentItemsIcon;
@property (copy, nonatomic) NSString *centerContentItemsText;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *leadingAccessoryImageName;
@property (copy, nonatomic) NSString *leadingAccessoryImagePath;
@property (nonatomic) double timeoutSeconds;
@property (copy, nonatomic) NSString *trailingAccessoryImageName;
@property (copy, nonatomic) NSString *trailingAccessoryImagePath;
@property (copy, nonatomic) NSString *trailingAccessoryText;
@property (nonatomic) double lowBatteryLevel;

- (id)init;
- (void).cxx_destruct;
- (void)_activate;
- (void)activate;
- (void)encodeWithXPCObject:(id)a0;
- (void)invalidate;
- (void)_xpcSendReplyError:(id)a0 request:(id)a1;
- (void)_xpcStart;
- (void)_xpcSendMessage;
- (void)_xpcEvent:(id)a0;
- (void)_xpcConnectionMessage:(id)a0;
- (void)_xpcCompleted:(id)a0;

@end
