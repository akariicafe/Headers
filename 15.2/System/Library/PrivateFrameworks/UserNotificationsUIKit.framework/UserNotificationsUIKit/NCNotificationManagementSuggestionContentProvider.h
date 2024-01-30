@class NSString;
@protocol NCNotificationManagementSuggestionDelegate;

@interface NCNotificationManagementSuggestionContentProvider : NCNotificationManagementContentProvider <NCSuggestionContentProviding>

@property (weak, nonatomic) id<NCNotificationManagementSuggestionDelegate> suggestionDelegate;
@property (copy, nonatomic) NSString *optionsSummaryText;
@property (nonatomic) unsigned long long numberOfOptionButtons;
@property (readonly, copy, nonatomic) NSString *optionsSummaryTitle;
@property (nonatomic) BOOL auxiliaryOptionsVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)configureOptionButtons:(id)a0;
- (id)initWithNotificationRequest:(id)a0 bundleDisplayName:(id)a1 managementDelegate:(id)a2 suggestionDelegate:(id)a3;

@end
