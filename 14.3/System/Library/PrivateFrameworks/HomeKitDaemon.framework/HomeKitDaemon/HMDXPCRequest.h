@class NSString, NSDate;

@interface HMDXPCRequest : HMFObject

@property (readonly, nonatomic) NSDate *startTime;
@property (readonly, nonatomic) NSString *messageName;
@property (readonly) long long qualityOfService;
@property (readonly, copy, nonatomic) id /* block */ responseHandler;

- (void).cxx_destruct;
- (id)initWithMessageName:(id)a0 qualityOfService:(long long)a1 responseHandler:(id /* block */)a2;

@end
