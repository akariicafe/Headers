@class NSMutableDictionary;

@interface WFRequestOptions : NSObject

@property (readonly, nonatomic) NSMutableDictionary *httpHeaderDictionary;

- (void).cxx_destruct;
- (void)addHttpHeaderField:(id)a0 withValue:(id)a1;

@end
