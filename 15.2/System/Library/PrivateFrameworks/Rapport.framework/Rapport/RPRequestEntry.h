@class NSDictionary, NSString, NSObject;
@protocol OS_dispatch_source;

@interface RPRequestEntry : NSObject

@property (copy, nonatomic) NSDictionary *options;
@property (copy, nonatomic) NSString *requestID;
@property (copy, nonatomic) id /* block */ responseHandler;
@property (nonatomic) unsigned long long sendTicks;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (nonatomic) unsigned int xpcID;
@property (nonatomic) unsigned long long length;

- (void).cxx_destruct;

@end
