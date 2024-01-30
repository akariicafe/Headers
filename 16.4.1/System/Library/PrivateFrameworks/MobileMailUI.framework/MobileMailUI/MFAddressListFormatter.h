@class EFLazyCache, MFAddressBookManager, NSString, MFLocalizationListFormatter;
@protocol EMUserProfileProvider;

@interface MFAddressListFormatter : NSFormatter <MFAddressBookClient>

@property (readonly, nonatomic) id<EMUserProfileProvider> userProfileProvider;
@property (readonly, nonatomic) MFLocalizationListFormatter *listFormatter;
@property (retain, nonatomic) EFLazyCache *commentCache;
@property (retain, nonatomic) EFLazyCache *addressCache;
@property (retain, nonatomic) EFLazyCache *attributedAddressCache;
@property (retain, nonatomic) MFAddressBookManager *addressBookManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)stringForObjectValue:(id)a0;
- (void)_invalidateCache;
- (id)stringFromEmailAddressList:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)addressBookManager:(id)a0 addressBookDidChange:(void *)a1;
- (void)addressBookPreferencesChangedForAddressBookManager:(id)a0;
- (id)_addressCommentForAddressList:(id)a0;
- (id)_attributedAddressCommentForAddressList:(id)a0;
- (id)attributedStringFromEmailAddressList:(id)a0;
- (id)initWithUserProfileProvider:(id)a0 addressBookManager:(id)a1;
- (id)stringFromAddressAddressList:(id)a0;

@end
