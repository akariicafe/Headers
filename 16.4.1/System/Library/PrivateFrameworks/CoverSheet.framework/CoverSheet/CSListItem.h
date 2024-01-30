@class NSString, UIAction, NSArray, NSDate, NCNotificationListSupplementaryViewConfiguration, UIViewController;
@protocol CSListItemHosting;

@interface CSListItem : NSObject <BSDescriptionProviding>

@property (readonly, nonatomic) NSString *identifier;
@property (retain, nonatomic) NCNotificationListSupplementaryViewConfiguration *configuration;
@property (readonly, nonatomic) NSString *groupingIdentifier;
@property (readonly, nonatomic) NSString *sectionIdentifier;
@property (retain, nonatomic) UIAction *onTapAction;
@property (retain, nonatomic) NSArray *swipeActions;
@property (retain, nonatomic) UIViewController<CSListItemHosting> *contentHost;
@property (nonatomic) BOOL prefersProminentPresentationAndDismissal;
@property (retain, nonatomic) NSDate *contentCreatedDate;
@property (nonatomic) double relevanceScore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIdentifier:(id)a0 groupingIdentifier:(id)a1 sectionIdentifier:(id)a2;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;

@end
