@class NSString;

@interface CKMediaRequestDetails : NSObject

@property (readonly, nonatomic) long long requestID;
@property (readonly, nonatomic) id /* block */ resultHandler;
@property (readonly, nonatomic) NSString *transferGUID;

- (void).cxx_destruct;
- (id)initWithRequestID:(long long)a0 transferGUID:(id)a1 resultHandler:(id /* block */)a2;

@end
