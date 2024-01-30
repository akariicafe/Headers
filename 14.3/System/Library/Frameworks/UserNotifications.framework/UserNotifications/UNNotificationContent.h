@class NSDate, NSString, NSURL, NSArray, NSSet, UNNotificationSound, NSDictionary, UNNotificationIcon, NSNumber;

@interface UNNotificationContent : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSString *_subtitle;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *header;
@property (readonly, nonatomic) BOOL shouldIgnoreDoNotDisturb;
@property (readonly, nonatomic) BOOL shouldIgnoreDowntime;
@property (readonly, nonatomic) BOOL shouldSuppressScreenLightUp;
@property (readonly, nonatomic) BOOL shouldHideDate;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) BOOL shouldAuthenticateDefaultAction;
@property (readonly, nonatomic) BOOL shouldBackgroundDefaultAction;
@property (readonly, nonatomic) BOOL shouldPreventNotificationDismissalAfterDefaultAction;
@property (readonly, nonatomic) BOOL shouldSuppressDefaultAction;
@property (readonly, copy, nonatomic) NSURL *defaultActionURL;
@property (readonly, copy, nonatomic) UNNotificationIcon *icon;
@property (readonly, copy, nonatomic) NSSet *topicIdentifiers;
@property (readonly, nonatomic) unsigned long long realertCount;
@property (readonly, nonatomic) BOOL shouldUseRequestIdentifierForDismissalSync;
@property (readonly, nonatomic) BOOL shouldSuppressSyncDismissalWhenRemoved;
@property (readonly, nonatomic) NSString *accessoryImageName;
@property (readonly, copy, nonatomic) NSArray *peopleIdentifiers;
@property (readonly, nonatomic) BOOL shouldPreemptPresentedNotification;
@property (readonly, nonatomic) BOOL shouldHideTime;
@property (readonly, nonatomic) BOOL hasDefaultAction;
@property (readonly, copy, nonatomic) NSString *defaultActionTitle;
@property (readonly, copy, nonatomic) NSArray *attachments;
@property (readonly, copy, nonatomic) NSNumber *badge;
@property (readonly, copy, nonatomic) NSString *body;
@property (readonly, copy, nonatomic) NSString *categoryIdentifier;
@property (readonly, copy, nonatomic) NSString *launchImageName;
@property (readonly, copy, nonatomic) UNNotificationSound *sound;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *threadIdentifier;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSDictionary *userInfo;
@property (readonly, copy, nonatomic) NSString *summaryArgument;
@property (readonly, nonatomic) unsigned long long summaryArgumentCount;
@property (readonly, copy, nonatomic) NSString *targetContentIdentifier;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithAccessoryImageName:(id)a0 attachments:(id)a1 badge:(id)a2 body:(id)a3 categoryIdentifier:(id)a4 date:(id)a5 icon:(id)a6 defaultActionTitle:(id)a7 defaultActionURL:(id)a8 expirationDate:(id)a9 header:(id)a10 launchImageName:(id)a11 peopleIdentifiers:(id)a12 shouldHideDate:(BOOL)a13 shouldHideTime:(BOOL)a14 shouldIgnoreDoNotDisturb:(BOOL)a15 shouldIgnoreDowntime:(BOOL)a16 shouldSuppressScreenLightUp:(BOOL)a17 shouldAuthenticateDefaultAction:(BOOL)a18 shouldBackgroundDefaultAction:(BOOL)a19 shouldPreventNotificationDismissalAfterDefaultAction:(BOOL)a20 shouldSuppressDefaultAction:(BOOL)a21 shouldSuppressSyncDismissalWhenRemoved:(BOOL)a22 shouldUseRequestIdentifierForDismissalSync:(BOOL)a23 shouldPreemptPresentedNotification:(BOOL)a24 sound:(id)a25 subtitle:(id)a26 threadIdentifier:(id)a27 title:(id)a28 topicIdentifiers:(id)a29 realertCount:(unsigned long long)a30 summaryArgument:(id)a31 summaryArgumentCount:(unsigned long long)a32 targetContentIdentifier:(id)a33 userInfo:(id)a34;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (id)_descriptionForDebug:(BOOL)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_safeStringForString:(id)a0 debug:(BOOL)a1;

@end
