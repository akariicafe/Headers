@class NSString;

@interface MCUserNotificationQueueEntry : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSString *defaultButtonText;
@property (retain, nonatomic) NSString *alternateButtonText;
@property (retain, nonatomic) NSString *otherButtonText;
@property (retain, nonatomic) NSString *textfieldPlaceholder;
@property (nonatomic) BOOL displayOnLockScreen;
@property (nonatomic) BOOL dismissOnLock;
@property (nonatomic) BOOL displayInAppWhitelistModes;
@property (nonatomic) double dismissAfterTimeInterval;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) id notification;
@property (retain, nonatomic) NSString *identifier;

- (void).cxx_destruct;

@end
