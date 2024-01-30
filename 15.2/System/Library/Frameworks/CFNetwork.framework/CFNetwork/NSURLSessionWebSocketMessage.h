@class NSData, NSString;

@interface NSURLSessionWebSocketMessage : NSObject {
    id content;
}

@property (readonly) long long type;
@property (readonly, copy) NSData *data;
@property (readonly, copy) NSString *string;

- (id)initWithString:(id)a0;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
