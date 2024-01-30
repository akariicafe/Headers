@class NSString, NSDictionary, IKJSXMLDocument, NSData, NSHTTPURLResponse;

@interface SKUIJSFakeXMLHTTPRequest : IKJSObject <SKUIJSFakeXMLHTTPRequest> {
    NSData *_data;
    NSDictionary *_performanceMetrics;
    NSHTTPURLResponse *_response;
}

@property (readonly) NSDictionary *metrics;
@property (readonly) unsigned int readyState;
@property (readonly) id response;
@property (readonly) NSString *responseText;
@property (readonly) unsigned int responseType;
@property (readonly) IKJSXMLDocument *responseXML;
@property (readonly) unsigned int status;
@property (readonly, retain) NSString *statusText;

- (void).cxx_destruct;
- (id)getAllResponseHeaders;
- (id)getResponseHeader:(id)a0;
- (id)initWithAppContext:(id)a0 data:(id)a1 URLResponse:(id)a2 performanceMetrics:(id)a3;

@end
