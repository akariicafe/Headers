@class NSURL, UNNotificationIcon;
@protocol BCSAction;

@interface BCSNotificationIcon : NSObject {
    id<BCSAction> _action;
}

@property (class, readonly, nonatomic) UNNotificationIcon *qrCodeIcon;
@property (class, readonly, nonatomic) UNNotificationIcon *nfcIcon;
@property (class, readonly, nonatomic) UNNotificationIcon *viewfinderIcon;

@property (readonly, copy, nonatomic) NSURL *imageURL;

- (id)initWithAction:(id)a0;
- (void).cxx_destruct;
- (id)_clipIconURLForAction:(id)a0 scale:(double)a1;
- (id)_notificationIconDataURLForApp:(id)a0 scale:(float)a1;

@end
