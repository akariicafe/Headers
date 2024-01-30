@class NSString, NSMutableArray;

@interface FLGroupViewModelImpl : NSObject <FLGroupViewModel> {
    NSMutableArray *_mutableItems;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *rowTitle;
@property (copy, nonatomic) NSString *groupTitle;
@property (copy, nonatomic) NSString *accountID;
@property (nonatomic) BOOL needsAccountID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIdentifier:(id)a0;
- (void)addItem:(id)a0;
- (id)footerText;
- (BOOL)restrictionEnabled;
- (id)subtitleText;
- (void).cxx_destruct;
- (BOOL)shouldCoalesceItems;
- (id)_expirationOrInformativeText;
- (id)items;

@end
