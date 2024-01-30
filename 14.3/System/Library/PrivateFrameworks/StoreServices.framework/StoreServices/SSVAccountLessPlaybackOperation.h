@class NSString, NSMutableDictionary;

@interface SSVAccountLessPlaybackOperation : SSVComplexOperation {
    NSString *_assetStoreFrontIdentifier;
    NSString *_itemIdentifier;
    id /* block */ _responseBlock;
}

@property (copy, nonatomic) NSMutableDictionary *HTTPHeaderFields;
@property (copy, nonatomic) NSString *assetStoreFrontIdentifier;
@property (copy) NSString *itemIdentifier;
@property (copy) id /* block */ responseBlock;

- (void)setValue:(id)a0 forHTTPHeaderField:(id)a1;
- (void).cxx_destruct;
- (void)main;
- (id)_requestBodyData;
- (id)valueForHTTPHeaderField:(id)a0;

@end
