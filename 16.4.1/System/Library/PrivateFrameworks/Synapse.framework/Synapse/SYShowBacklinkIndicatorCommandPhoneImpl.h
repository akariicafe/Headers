@class NSString, NSUserActivity;

@interface SYShowBacklinkIndicatorCommandPhoneImpl : NSObject <SYShowBacklinkIndicatorCommandImpl> {
    NSUserActivity *_userActivity;
}

@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
