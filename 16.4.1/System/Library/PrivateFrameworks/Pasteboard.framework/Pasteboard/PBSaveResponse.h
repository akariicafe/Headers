@class UISPasteSharingToken;

@interface PBSaveResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long notificationState;
@property (readonly) long long changeCount;
@property (readonly) UISPasteSharingToken *sharingToken;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithNotificationState:(unsigned long long)a0 changeCount:(long long)a1 sharingToken:(id)a2;

@end
