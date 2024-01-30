@class NSString;

@interface MockBrowserSavedState : _SFBrowserSavedState

@property (nonatomic) unsigned long long tabsCount;
@property (copy, nonatomic) NSString *initalURLString;

- (void).cxx_destruct;
- (id)savedTabsStateForBrowserControllerWithUUID:(id)a0;
- (BOOL)activeDocumentIsValidForBrowserControllerWithUUID:(id)a0;
- (id)savedTabsStateForBrowserControllerWithUUID:(id)a0 initialURLString:(id)a1;

@end
