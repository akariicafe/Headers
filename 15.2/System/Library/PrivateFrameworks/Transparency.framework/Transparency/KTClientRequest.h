@class NSString, NSData, NSArray;

@interface KTClientRequest : NSObject

@property unsigned long long type;
@property (retain) NSString *application;
@property (retain) NSString *uri;
@property (retain) NSData *accountID;
@property (retain) NSData *accountKey;
@property (retain) NSArray *serverLoggableDatas;
@property (retain) NSArray *clientLoggableDatas;
@property (retain) NSData *queryRequest;
@property (retain) NSData *queryResponse;

- (void).cxx_destruct;
- (id)addValidateRequest:(id)a0 dataStore:(id)a1 error:(id *)a2;
- (id)initWithType:(unsigned long long)a0 application:(id)a1 uri:(id)a2 accountID:(id)a3 accountKey:(id)a4 serverLoggableDatas:(id)a5;

@end
