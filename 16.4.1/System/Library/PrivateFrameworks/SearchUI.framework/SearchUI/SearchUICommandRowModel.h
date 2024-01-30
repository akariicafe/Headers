@class NSString, TLKRichText;

@interface SearchUICommandRowModel : SearchUICardSectionRowModel {
    NSString *_sportsCanonicalID;
    TLKRichText *_title;
    TLKRichText *_toggledTitle;
    TLKRichText *_subtitle;
    BOOL _toggled;
}

@property (readonly) TLKRichText *title;
@property (readonly) TLKRichText *subtitle;
@property (readonly) BOOL toggled;

- (unsigned long long)subscriptionType;
- (void).cxx_destruct;
- (void)checkIfCommandIsValidWithCompletionHandler:(id /* block */)a0;
- (BOOL)commandSupported;
- (void)getSubscriptionStatus:(id /* block */)a0;
- (id)initWithResult:(id)a0 cardSection:(id)a1 isInline:(BOOL)a2 queryId:(unsigned long long)a3;
- (void)safelyUpdateView:(id)a0;
- (void)toggleStateWithDetailedSectionView:(id)a0;
- (void)updateStateWithCommandCardSectionView:(id)a0;

@end
