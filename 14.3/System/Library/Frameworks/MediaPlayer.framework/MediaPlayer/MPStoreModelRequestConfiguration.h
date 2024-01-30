@class NSURLRequest, NSArray;

@interface MPStoreModelRequestConfiguration : NSObject

@property (readonly, copy, nonatomic) NSURLRequest *URLRequest;
@property (readonly, copy, nonatomic) NSArray *URLRequests;
@property (readonly, nonatomic) NSArray *requestedItemIdentifiers;
@property (readonly, nonatomic) unsigned long long itemMetadataRequestReason;
@property (readonly, nonatomic) long long type;

- (void).cxx_destruct;
- (id)initWithURLRequests:(id)a0;
- (id)initWithRequestedItemIdentifiers:(id)a0 reason:(unsigned long long)a1;
- (id)initWithURLRequest:(id)a0;

@end
