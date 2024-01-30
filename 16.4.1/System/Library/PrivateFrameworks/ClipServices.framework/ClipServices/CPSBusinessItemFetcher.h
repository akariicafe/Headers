@class NSString, BCSBusinessQueryService;

@interface CPSBusinessItemFetcher : NSObject <CPSBusinessItemFetching> {
    BCSBusinessQueryService *_businessQueryService;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
