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
@property (readonly, copy, nonatomic) NSString *defaultActionBundleIdentifier;
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
@property (readonly, copy, nonatomic) NSString *filterCriteria;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)leaveSecurityScope;
- (void)addSecurityScope:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)removeSecurityScope;
- (void)enterSecurityScope;
- (id)init;
- (void).cxx_destruct;
- (id)_descriptionForDebug:(BOOL)a0;
- (id)_initWithContentType:(id)a0 communicationContext:(id)a1 accessoryImageName:(id)a2 attachments:(id)a3 badge:(id)a4 body:(id)a5 categoryIdentifier:(id)a6 date:(id)a7 icon:(id)a8 defaultActionTitle:(id)a9 defaultActionURL:(id)a10 defaultActionBundleIdentifier:(id)a11 expirationDate:(id)a12 header:(id)a13 footer:(id)a14 launchImageName:(id)a15 peopleIdentifiers:(id)a16 shouldHideDate:(BOOL)a17 shouldHideTime:(BOOL)a18 shouldIgnoreDoNotDisturb:(BOOL)a19 shouldIgnoreDowntime:(BOOL)a20 shouldSuppressScreenLightUp:(BOOL)a21 shouldAuthenticateDefaultAction:(BOOL)a22 shouldBackgroundDefaultAction:(BOOL)a23 shouldPreventNotificationDismissalAfterDefaultAction:(BOOL)a24 shouldShowSubordinateIcon:(BOOL)a25 shouldSuppressDefaultAction:(BOOL)a26 shouldSuppressSyncDismissalWhenRemoved:(BOOL)a27 shouldUseRequestIdentifierForDismissalSync:(BOOL)a28 shouldPreemptPresentedNotification:(BOOL)a29 shouldDisplayActionsInline:(BOOL)a30 sound:(id)a31 subtitle:(id)a32 threadIdentifier:(id)a33 title:(id)a34 topicIdentifiers:(id)a35 realertCount:(unsigned long long)a36 summaryArgument:(id)a37 summaryArgumentCount:(unsigned long long)a38 targetContentIdentifier:(id)a39 interruptionLevel:(unsigned long long)a40 relevanceScore:(double)a41 filterCriteria:(id)a42 userInfo:(id)a43;
- (id)_safeStringForString:(id)a0 debug:(BOOL)a1;
- (id)contentByUpdatingWithProvider:(id)a0 error:(out id *)a1;
- (id)contentByUpdatingWithReadAnnouncementIntent:(id)a0 error:(out id *)a1;
- (id)contentByUpdatingWithSendMessageIntent:(id)a0 error:(out id *)a1;
- (id)contentByUpdatingWithStartCallIntent:(id)a0 error:(out id *)a1;
- (id)markedMutableCopyWithMessage:(id)a0;

@end
