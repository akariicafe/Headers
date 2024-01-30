@class NSHTTPURLResponse, NSDictionary, NSURL, NSArray;

@interface SSVPlaybackResponse : NSObject <NSCopying>

@property (copy, nonatomic) NSURL *fallbackStreamingKeyServerURL;
@property (copy, nonatomic) NSURL *fallbackStreamingKeyCertificateURL;
@property (readonly, copy, nonatomic) NSDictionary *responseDictionary;
@property (readonly, nonatomic) NSHTTPURLResponse *URLResponse;
@property (readonly, nonatomic) NSArray *items;

- (id)initWithDictionary:(id)a0 URLResponse:(id)a1;
- (id)itemForItemIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_enumerateItemsUsingBlock:(id /* block */)a0;

@end
