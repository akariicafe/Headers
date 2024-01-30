@class NSDictionary, NSString, NSObject;
@protocol OS_dispatch_source;

@interface SKRequestEntry : NSObject

@property (copy, nonatomic) NSDictionary *options;
@property (copy, nonatomic) NSString *requestID;
@property (copy, nonatomic) id /* block */ responseHandler;
@property (nonatomic) unsigned long long sendTicks;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;

- (void).cxx_destruct;

@end
