@class NSString, NSArray, NSDictionary, TFFeedbackEntry;

@interface TFFeedbackEntryGroup : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSArray *entries;
@property (readonly, copy, nonatomic) NSString *headerText;
@property (readonly, copy, nonatomic) NSDictionary *headerTextLinkMap;
@property (readonly, copy, nonatomic) NSString *footerText;
@property (readonly, copy, nonatomic) NSDictionary *footerTextLinkMap;
@property (readonly, nonatomic) unsigned long long election;
@property (readonly, nonatomic, getter=isToggleable) BOOL toggleable;
@property (readonly, nonatomic) TFFeedbackEntry *groupToggleEntry;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 entries:(id)a1 title:(id)a2 election:(unsigned long long)a3 headerText:(id)a4 headerTextLinkMap:(id)a5 footerText:(id)a6 footerTextLinkMap:(id)a7;
- (unsigned long long)numberOfVisibleItemsForIncludeState:(BOOL)a0;
- (id)visibleEntryForIndex:(unsigned long long)a0;

@end
