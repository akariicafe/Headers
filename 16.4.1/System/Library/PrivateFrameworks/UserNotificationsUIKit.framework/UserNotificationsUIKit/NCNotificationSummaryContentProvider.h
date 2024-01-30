@class NSArray, NSString, NSDate;

@interface NCNotificationSummaryContentProvider : NSObject <NCNotificationSummaryContentProviding>

@property (retain, nonatomic) NSArray *notificationRequests;
@property (nonatomic) unsigned long long maxNumberOfSummaryItems;
@property (copy, nonatomic) NSArray *titlesForSectionListsInSummary;
@property (copy, nonatomic) NSString *summaryTitle;
@property (readonly, copy, nonatomic) NSString *summary;
@property (readonly, nonatomic) NSArray *summaryIconViews;
@property (readonly, nonatomic, getter=isIconViewLeading) BOOL iconViewLeading;
@property (readonly, nonatomic) BOOL hideSummaryIconViews;
@property (copy, nonatomic) NSString *summaryTitleFontName;
@property (copy, nonatomic) NSDate *summaryDate;
@property (copy, nonatomic) NSString *summaryIconSymbolName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)summaryContentProviderOfType:(unsigned long long)a0 notificationRequests:(id)a1;

- (void).cxx_destruct;
- (id)_communicationAvatarForNotificationRequest:(id)a0;
- (id)_iconViewForNotificationRequest:(id)a0;
- (id)_summaryIconViewForNotificationRequest:(id)a0;
- (id)_summaryStringForCommunicationNotificationRequest:(id)a0;
- (id)_summaryStringForNotificationRequest:(id)a0;

@end
