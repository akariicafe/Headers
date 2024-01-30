@class NSArray, NSDictionary, NSString, NSDate, NSNumber;

@interface ICStorePlatformResponse : NSObject <ICStorePlatformResponse> {
    NSArray *_requestedItemIdentifiers;
    NSDictionary *_responseDictionary;
    NSString *_storefrontIdentifier;
}

@property (readonly, nonatomic, getter=isAuthenticated) BOOL authenticated;
@property (readonly, copy, nonatomic) NSDictionary *resultsDictionary;
@property (readonly, copy, nonatomic) NSArray *allItems;
@property (readonly, copy, nonatomic) NSNumber *accountIdentifier;
@property (readonly, copy, nonatomic) NSNumber *enqueuerAccountIdentifier;
@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly, copy, nonatomic) NSString *storefrontIdentifier;
@property (readonly, copy, nonatomic) id rawResponse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithResponseDictionary:(id)a0;
- (void)enumerateItemsUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithResponseDictionary:(id)a0 requestedItemIdentifiers:(id)a1;
- (void)_enumerateResultDictionariesUsingBlock:(id /* block */)a0;
- (id)initWithURLResponse:(id)a0 requestedItemIdentifiers:(id)a1;
- (id)itemForIdentifier:(id)a0;

@end
