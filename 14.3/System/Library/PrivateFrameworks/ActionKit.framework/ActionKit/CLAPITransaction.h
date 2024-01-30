@class NSHTTPURLResponse, NSString, NSMutableData, NSURLRequest, NSURLConnection;

@interface CLAPITransaction : NSObject

@property (retain, nonatomic) NSURLRequest *request;
@property (retain, nonatomic) NSHTTPURLResponse *response;
@property (retain, nonatomic) NSURLConnection *connection;
@property (retain, nonatomic) NSMutableData *receivedData;
@property (nonatomic) long long requestType;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) id userInfo;
@property (retain, nonatomic) id internalContext;

+ (id)transaction;

- (id)init;
- (void)dealloc;

@end
