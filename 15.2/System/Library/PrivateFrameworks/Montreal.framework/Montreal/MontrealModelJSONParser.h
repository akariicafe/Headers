@class NSString, NSDictionary, MontrealNNModelNetwork;

@interface MontrealModelJSONParser : NSObject

@property (readonly) NSString *jsonDir;
@property (readonly) MontrealNNModelNetwork *network;
@property (readonly) NSDictionary *infoDictionary;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)createJSONFromFile:(id)a0;

@end
