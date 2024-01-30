@class NSMutableDictionary, NSMutableArray;

@interface ECRawMessageHeaders : NSObject {
    NSMutableDictionary *_headers;
    NSMutableArray *_orderedHeaders;
}

- (void).cxx_destruct;
- (id)allHeaderKeys;
- (id)firstHeaderForKey:(id)a0;
- (id)headersForKey:(id)a0;
- (id)allHeaders;
- (id)initWithHeaderString:(id)a0;

@end
