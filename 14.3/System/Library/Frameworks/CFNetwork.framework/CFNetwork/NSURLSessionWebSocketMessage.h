@class NSData, NSString;

@interface NSURLSessionWebSocketMessage : NSObject {
    id content;
}

@property (readonly) long long type;
@property (readonly, copy) NSData *data;
@property (readonly, copy) NSString *string;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithString:(id)a0;

@end
