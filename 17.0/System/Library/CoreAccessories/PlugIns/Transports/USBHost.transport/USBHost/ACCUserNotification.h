@class NSString, NSDictionary, NSURL, NSNumber;

@interface ACCUserNotification : NSObject

@property (retain, nonatomic) NSDictionary *userNotificationCFDict;
@property (nonatomic) struct __CFUserNotification { } *userNotificationCF;
@property (readonly, nonatomic) NSString *uuid;
@property (nonatomic) int type;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *defaultButtonName;
@property (copy, nonatomic) NSString *otherButtonName;
@property (copy, nonatomic) NSURL *iconURL;
@property (nonatomic) BOOL isModal;
@property (nonatomic) BOOL dismissOnUnlock;
@property (nonatomic) BOOL ignoreQuietMode;
@property (nonatomic) BOOL presentViaSystemAperture;
@property (retain, nonatomic) NSNumber *systemSoundID;
@property (nonatomic) double timeout;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *groupIdentifier;

- (id)init;
- (void).cxx_destruct;
- (void)createBackingUserNotification;

@end
