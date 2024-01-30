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

- (BOOL)locationServicesDisabledByRestrictions;
- (BOOL)shouldShowLocationSharingSpecifier;
- (id)initWithAccountManager:(id)a0;
- (void)locationSharingSpecifierWasTapped:(id)a0;
- (BOOL)shouldEnableLocationSharingSpecifier;
- (BOOL)isAccountInGrayMode;
- (void).cxx_destruct;

@end
