@class ATXSuggestedPagesTunableConstants;

@interface ATXSuggestedPagesContactsWidgetDataSource : NSObject <ATXSuggestedPagesWidgetDataSource> {
    ATXSuggestedPagesTunableConstants *_suggestedPagesTunableConstants;
}

- (id)provideWidgetsForPageType:(long long)a0 environment:(id)a1;
- (id)_createMediumContactsWidgetForPeople:(id)a0 entities:(id)a1;
- (id)_createSmallContactsWidgetForPeople:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
