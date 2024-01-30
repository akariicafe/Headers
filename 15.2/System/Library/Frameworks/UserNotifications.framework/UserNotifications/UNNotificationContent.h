@class NSDate, NSString, NSArray, NSURL, _UNNotificationCommunicationContext, NSSet, UNNotificationSound, NSDictionary, UNNotificationIcon, NSNumber;

@interface UNNotificationContent : NSObject <UNNotificationSecurityScopeProviding, NSCopying, NSMutableCopying, NSSecureCoding> {
    NSString *_subtitle;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *markedMutableCopyMessage;
@property (readonly, copy, nonatomic) NSString *contentType;
@property (readonly, copy, nonatomic) _UNNotificationCommunicationContext *communicationContext;
@property (readonly, copy, nonatomic) NSString *header;
@property (readonly, copy, nonatomic) NSString *footer;
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
@property (readonly, nonatomic) BOOL shouldDisplayActionsInline;
@property (readonly, copy, nonatomic) UNNotificationIcon *icon;
@property (readonly, nonatomic) BOOL shouldShowSubordinateIcon;
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
@property (readonly, nonatomic) unsigned long long interruptionLevel;
@property (readonly, nonatomic) double relevanceScore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_descriptionForDebug:(BOOL)a0;
- (id)_safeStringForString:(id)a0 debug:(BOOL)a1;
- (id)markedMutableCopyWithMessage:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)leaveSecurityScope;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)enterSecurityScope;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_initWithContentType:(id)a0 communicationContext:(id)a1 accessoryImageName:(id)a2 attachments:(id)a3 badge:(id)a4 body:(id)a5 categoryIdentifier:(id)a6 date:(id)a7 icon:(id)a8 defaultActionTitle:(id)a9 defaultActionURL:(id)a10 expirationDate:(id)a11 header:(id)a12 footer:(id)a13 launchImageName:(id)a14 peopleIdentifiers:(id)a15 shouldHideDate:(BOOL)a16 shouldHideTime:(BOOL)a17 shouldIgnoreDoNotDisturb:(BOOL)a18 shouldIgnoreDowntime:(BOOL)a19 shouldSuppressScreenLightUp:(BOOL)a20 shouldAuthenticateDefaultAction:(BOOL)a21 shouldBackgroundDefaultAction:(BOOL)a22 shouldPreventNotificationDismissalAfterDefaultAction:(BOOL)a23 shouldShowSubordinateIcon:(BOOL)a24 shouldSuppressDefaultAction:(BOOL)a25 shouldSuppressSyncDismissalWhenRemoved:(BOOL)a26 shouldUseRequestIdentifierForDismissalSync:(BOOL)a27 shouldPreemptPresentedNotification:(BOOL)a28 shouldDisplayActionsInline:(BOOL)a29 sound:(id)a30 subtitle:(id)a31 threadIdentifier:(id)a32 title:(id)a33 topicIdentifiers:(id)a34 realertCount:(unsigned long long)a35 summaryArgument:(id)a36 summaryArgumentCount:(unsigned long long)a37 targetContentIdentifier:(id)a38 interruptionLevel:(unsigned long long)a39 relevanceScore:(double)a40 userInfo:(id)a41;
- (id)contentByUpdatingWithProvider:(id)a0 error:(out id *)a1;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)contentByUpdatingWithSendMessageIntent:(id)a0 error:(out id *)a1;
- (id)contentByUpdatingWithStartCallIntent:(id)a0 error:(out id *)a1;
- (id)contentByUpdatingWithReadAnnouncementIntent:(id)a0 error:(out id *)a1;
- (void)removeSecurityScope;
- (void)addSecurityScope:(id)a0;

@end
