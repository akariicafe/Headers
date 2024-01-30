@class NSString, NSMutableDictionary, NSData;

@interface HTSHTTPMessage : NSObject

@property (copy, nonatomic) NSString *versionString;
@property (retain, nonatomic) NSMutableDictionary *headers;
@property (retain, nonatomic) NSData *body;

- (void)dealloc;
- (id)valueForHeaderField:(id)a0;
- (void)addHeadersToMessage:(struct __CFHTTPMessage { } *)a0;
- (struct __CFHTTPMessage { } *)copyMessage;

@end
