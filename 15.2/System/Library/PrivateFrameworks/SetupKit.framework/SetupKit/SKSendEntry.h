@class NSString, NSDictionary, NSData, NSObject, NSNumber;
@protocol OS_dispatch_source;

@interface SKSendEntry : NSObject

@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) NSData *eventData;
@property (copy, nonatomic) NSString *eventID;
@property (copy, nonatomic) NSDictionary *options;
@property (nonatomic) unsigned long long queueTicks;
@property (copy, nonatomic) NSString *requestID;
@property (copy, nonatomic) NSDictionary *request;
@property (copy, nonatomic) id /* block */ responseHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (nonatomic) unsigned int xid;
@property (retain, nonatomic) NSNumber *xidObj;

- (void).cxx_destruct;

@end
