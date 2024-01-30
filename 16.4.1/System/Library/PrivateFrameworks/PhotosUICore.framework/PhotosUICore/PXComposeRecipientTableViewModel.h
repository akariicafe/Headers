@class NSArray, NSString, PXComposeRecipientDataSourceManager, PXPeopleSuggestionsMediaProvider;

@interface PXComposeRecipientTableViewModel : PXObservable

@property (readonly, nonatomic) PXComposeRecipientDataSourceManager *composeRecipientDataSourceManager;
@property (readonly, nonatomic) PXPeopleSuggestionsMediaProvider *peopleSuggestionsMediaProvider;
@property (readonly, copy, nonatomic) NSArray *recipients;
@property (readonly, copy, nonatomic) NSArray *composeRecipients;
@property (readonly, nonatomic) BOOL canAddRecipients;
@property (readonly, nonatomic) BOOL canDeleteRecipients;
@property (readonly, nonatomic) BOOL canSelectRecipients;
@property (readonly, copy, nonatomic) NSString *headerTitle;
@property (readonly, copy, nonatomic) NSString *footerTitle;
@property (readonly, nonatomic) BOOL useGroupedBackgroundColor;

- (void)performChanges:(id /* block */)a0;
- (void)setHeaderTitle:(id)a0;
- (void)setRecipients:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setFooterTitle:(id)a0;
- (id)initWithComposeRecipientDataSourceManager:(id)a0;
- (void)setCanAddRecipients:(BOOL)a0;
- (void)setCanDeleteRecipients:(BOOL)a0;
- (void)setCanSelectRecipients:(BOOL)a0;
- (void)setComposeRecipients:(id)a0;
- (void)setUseGroupedBackgroundColor:(BOOL)a0;

@end
