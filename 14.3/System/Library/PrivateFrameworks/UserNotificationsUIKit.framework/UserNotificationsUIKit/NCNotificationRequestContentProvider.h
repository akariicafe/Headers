@class NSTimeZone, NSArray, NSString, UIImage, NCNotificationRequest, NSDate;
@protocol NCNotificationStaticContentProvidingDelegate;

@interface NCNotificationRequestContentProvider : NSObject <NCNotificationStaticContentProviding>

@property (retain, nonatomic) NCNotificationRequest *notificationRequest;
@property (weak, nonatomic) id<NCNotificationStaticContentProvidingDelegate> delegate;
@property (readonly, nonatomic) NSArray *icons;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, nonatomic, getter=isDateAllDay) BOOL dateAllDay;
@property (readonly, copy, nonatomic) NSTimeZone *timeZone;
@property (readonly, copy, nonatomic) NSString *primaryText;
@property (readonly, copy, nonatomic) NSString *primarySubtitleText;
@property (readonly, copy, nonatomic) NSString *secondaryText;
@property (readonly, copy, nonatomic) NSString *summaryText;
@property (readonly, nonatomic) UIImage *thumbnail;
@property (readonly, copy, nonatomic) id /* block */ cancelAction;
@property (readonly, copy, nonatomic) id /* block */ clearAction;
@property (readonly, copy, nonatomic) id /* block */ closeAction;
@property (readonly, copy, nonatomic) id /* block */ defaultAction;
@property (readonly, copy, nonatomic) id /* block */ nilAction;
@property (readonly, nonatomic) NSArray *interfaceActions;
@property (readonly, nonatomic, getter=isNumberOfLinesInfinite) BOOL numberOfLinesInfinite;
@property (readonly, nonatomic) BOOL showsTextInputOnAppearance;
@property (readonly, nonatomic) unsigned long long coalesceCount;
@property (copy, nonatomic) NSArray *overriddenActions;
@property (readonly, copy, nonatomic) NSArray *currentActions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithNotificationRequest:(id)a0;
- (id /* block */)_actionForNotificationAction:(id)a0;
- (id)_appBundleIdentifer;

@end
