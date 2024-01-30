@class NSTimeZone, NSString, NSArray, UIImage, _UNNotificationCommunicationContext, NSDate;

@interface NCMutableNotificationContent : NCNotificationContent

@property (copy, nonatomic) NSString *contentType;
@property (copy, nonatomic) NSString *header;
@property (copy, nonatomic) NSString *customHeader;
@property (copy, nonatomic) NSString *defaultHeader;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *footer;
@property (copy, nonatomic) NSString *hiddenPreviewsBodyPlaceholder;
@property (copy, nonatomic) NSString *categorySummaryFormat;
@property (copy, nonatomic) NSString *summaryArgument;
@property (nonatomic) unsigned long long summaryArgumentCount;
@property (retain, nonatomic) _UNNotificationCommunicationContext *communicationContext;
@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) NSArray *icons;
@property (retain, nonatomic) UIImage *carPlayIcon;
@property (retain, nonatomic) NSArray *carPlayIcons;
@property (retain, nonatomic) UIImage *attachmentImage;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic, getter=isDateAllDay) BOOL dateAllDay;
@property (retain, nonatomic) NSTimeZone *timeZone;

- (void)setSummaryArgumentCount:(unsigned long long)a0;
- (void)setHiddenPreviewsBodyPlaceholder:(id)a0;
- (void)setFooter:(id)a0;
- (void)setDateAllDay:(BOOL)a0;
- (void)setSummaryArgument:(id)a0;
- (void)setCarPlayIcons:(id)a0;
- (void)setHeader:(id)a0;
- (void)setIcons:(id)a0;
- (void)setSubtitle:(id)a0;
- (void)setDefaultHeader:(id)a0;
- (void)setMessage:(id)a0;
- (void)setCustomHeader:(id)a0;
- (void)setCategorySummaryFormat:(id)a0;
- (void)setCommunicationContext:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setIcon:(id)a0;
- (void)setCarPlayIcon:(id)a0;
- (void)setTitle:(id)a0;
- (void)setTimeZone:(id)a0;
- (void)setAttachmentImage:(id)a0;
- (void)setDate:(id)a0;
- (void)setContentType:(id)a0;

@end
