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

- (id)valueForHTTPHeaderField:(id)a0;
- (void)setValue:(id)a0 forHTTPHeaderField:(id)a1;
- (void)main;
- (void).cxx_destruct;
- (id)_requestBodyData;

@end
