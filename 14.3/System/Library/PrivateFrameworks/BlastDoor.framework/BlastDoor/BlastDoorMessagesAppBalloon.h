@class BlastDoorImage, NSString, NSUUID, NSURL, BlastDoorMessagesAppBalloon_Layout;

@interface BlastDoorMessagesAppBalloon : NSObject {
    void /* unknown type, empty encoding */ messagesAppBalloon;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *ldtext;
@property (nonatomic, readonly) NSString *accessibilityLabel;
@property (nonatomic, readonly) NSString *appName;
@property (nonatomic, readonly) BlastDoorImage *appIcon;
@property (nonatomic, readonly) NSUUID *sessionIdentifier;
@property (nonatomic, readonly) NSString *layoutClass;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) long long appId;
@property (nonatomic, readonly) BlastDoorMessagesAppBalloon_Layout *layout;

- (id)init;
- (void).cxx_destruct;

@end
