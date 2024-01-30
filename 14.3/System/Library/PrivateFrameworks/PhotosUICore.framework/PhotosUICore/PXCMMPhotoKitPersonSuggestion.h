@class PHPerson, NSString, CNContact, PHFetchResult, PXRecipientTransport, NSObject;
@protocol OS_dispatch_queue;

@interface PXCMMPhotoKitPersonSuggestion : NSObject <PXCMMPersonSuggestion> {
    CNContact *_fetchQueue_linkedContact;
}

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *_contactFetchQueue;

@property (retain, nonatomic) PXRecipientTransport *bestTransport;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) PHPerson *person;
@property (readonly, nonatomic) CNContact *linkedContact;
@property (readonly, nonatomic) PHFetchResult *keyFaceFetchResult;
@property (readonly, nonatomic) PHFetchResult *keyAssetFetchResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)personSuggestionWithPerson:(id)a0;
+ (id)personSuggestionWithPerson:(id)a0 keyFaceFetchResult:(id)a1;
+ (id)personSuggestionWithPerson:(id)a0 keyFaceFetchResult:(id)a1 keyAssetFetchResult:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)matchesRecipientInRecipients:(id)a0;
- (id)initWithPerson:(id)a0 keyFaceFetchResult:(id)a1 keyAssetFetchResult:(id)a2;
- (id)personSuggestionUpdatedKeyFaceFetchResult:(id)a0;
- (id)personSuggestionUpdatedKeyAssetFetchResult:(id)a0;
- (id)personSuggestionUpdatedPerson:(id)a0;
- (id)_linkedContactForPerson:(id)a0;
- (void)_prefetchLinkedContactInBackgroundForPerson:(id)a0;

@end
