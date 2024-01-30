@class NSArray, NSString, AIDAAccountManager;
@protocol AAUISpecifierProviderDelegate;

@interface FMFSpecifierProvider : NSObject <AAUISpecifierProvider>

@property (retain, nonatomic) AIDAAccountManager *accountManager;
@property (weak, nonatomic) id<AAUISpecifierProviderDelegate> delegate;
@property (copy, nonatomic) NSArray *specifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithAccountManager:(id)a0;
- (BOOL)shouldShowLocationSharingSpecifier;
- (void)locationSharingSpecifierWasTapped:(id)a0;
- (BOOL)shouldEnableLocationSharingSpecifier;
- (BOOL)isAccountInGrayMode;
- (BOOL)locationServicesDisabledByRestrictions;

@end
