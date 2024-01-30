@class NSDictionary, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MPStoreCompletionOfferResponse : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_itemsByVariant;
}

@property (readonly, nonatomic) NSDictionary *responseDictionary;

- (id)initWithResponseDictionary:(id)a0;
- (void).cxx_destruct;
- (id)mediaItemsWithStoreOfferVariant:(long long)a0;

@end
