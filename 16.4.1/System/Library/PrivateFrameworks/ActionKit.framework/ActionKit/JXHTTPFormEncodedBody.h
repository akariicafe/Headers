@class NSString, NSMutableDictionary;

@interface JXHTTPFormEncodedBody : NSObject <JXHTTPRequestBody>

@property (retain, nonatomic) NSMutableDictionary *dictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)withDictionary:(id)a0;

- (id)requestData;
- (id)initWithDictionary:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)httpContentType;
- (id)httpInputStream;
- (long long)httpContentLength;

@end
