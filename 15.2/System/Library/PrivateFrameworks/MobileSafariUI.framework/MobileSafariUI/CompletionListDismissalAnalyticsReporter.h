@interface CompletionListDismissalAnalyticsReporter : NSObject {
    BOOL _goKeyTapped;
}

@property (nonatomic) BOOL acceptedCompletionListItem;
@property (nonatomic) long long unifiedFieldContentType;

- (void)reportAnalytics;

@end
