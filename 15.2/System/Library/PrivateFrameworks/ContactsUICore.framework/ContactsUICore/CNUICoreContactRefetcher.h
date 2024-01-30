@class NSArray;
@protocol CNUICoreContactStoreFacade;

@interface CNUICoreContactRefetcher : NSObject

@property (readonly, nonatomic) id<CNUICoreContactStoreFacade> contactStore;
@property (readonly, nonatomic) NSArray *contactsToRefetch;
@property (readonly, nonatomic) NSArray *keysToFetch;

+ (id)contactsByReplacingContacts:(id)a0 withContactsHavingMatchingIdentifier:(id)a1;
+ (id)refetchedContacts:(id)a0 fromStore:(id)a1 keysToFetch:(id)a2;
+ (id)contactsFoundAndNotFoundByPartioningContacts:(id)a0 usingFoundContacts:(id)a1;

- (id)allContacts;
- (void).cxx_destruct;
- (id)init;
- (id)initWithContactStore:(id)a0 contactsToRefetch:(id)a1 keysToFetch:(id)a2;
- (id)foundContacts;
- (id)contactsFoundAndNotFound;
- (id)initWithContactStore:(id)a0 contactsToRefetch:(id)a1;

@end
