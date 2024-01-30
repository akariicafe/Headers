@class NSTimeZone, NSString, NSArray, UIImage, NSDate, _UNNotificationCommunicationContext;

@interface NCNotificationContent : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying>

@property (readonly, copy, nonatomic) NSString *header;
@property (readonly, copy, nonatomic) NSString *customHeader;
@property (readonly, copy, nonatomic) NSString *defaultHeader;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *message;
@property (readonly, copy, nonatomic) NSString *footer;
@property (readonly, copy, nonatomic) NSString *hiddenPreviewsBodyPlaceholder;
@property (readonly, copy, nonatomic) NSString *categorySummaryFormat;
@property (readonly, copy, nonatomic) NSString *summaryArgument;
@property (readonly, nonatomic) unsigned long long summaryArgumentCount;
@property (readonly, copy, nonatomic) NSString *topic;
@property (readonly, nonatomic) UIImage *icon;
@property (readonly, nonatomic) NSArray *icons;
@property (readonly, nonatomic) UIImage *carPlayIcon;
@property (readonly, nonatomic) NSArray *carPlayIcons;
@property (readonly, nonatomic) UIImage *attachmentImage;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic, getter=isDateAllDay) BOOL dateAllDay;
@property (readonly, nonatomic) NSTimeZone *timeZone;
@property (readonly, copy, nonatomic) NSString *contentType;
@property (readonly, nonatomic) _UNNotificationCommunicationContext *communicationContext;
@property (readonly, nonatomic, getter=isMessagingType) BOOL messagingType;
@property (readonly, nonatomic, getter=isCallType) BOOL callType;
@property (readonly, nonatomic, getter=isCommunicationType) BOOL communicationType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isAirDrop;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithNotificationContent:(id)a0;
- (void).cxx_destruct;

@end
