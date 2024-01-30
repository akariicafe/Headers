@class CNContactStore, NSArray;

@interface _PSContactResolver : NSObject

@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly, nonatomic) NSArray *keysToFetch;

+ (id)handlesForContactFavorites;

- (id)contactWithIdentifier:(id)a0;
- (id)allEmailAndPhoneNumberHandlesForContact:(id)a0;
- (void).cxx_destruct;
- (id)resolveContactIfPossibleFromContactIdentifierString:(id)a0 pickFirstOfMultiple:(BOOL)a1;
- (id)initWithContactStore:(id)a0 keysToFetch:(id)a1;
- (id)resolveContactFromINPerson:(id)a0;
- (id)resolveContactIfPossibleFromContactIdentifierString:(id)a0;
- (id)resolveContactIdentifier:(id)a0;
- (id)resolveContact:(id)a0;
- (id)normalizedHandlesDictionaryFromHandles:(id)a0;

@end
