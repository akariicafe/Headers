@class NSString, NSDictionary, NSNumber, NSObject;
@protocol OS_tcp_listener;

@interface _NSCFServer : NSObject {
    NSNumber *_listenerID;
    NSObject<OS_tcp_listener> *_listener;
}

@property long long type;
@property long long listenerPort;
@property (retain) NSString *interface;
@property (retain) NSDictionary *configuration;
@property (getter=isCoprocessorInterfaceEnabled) BOOL enableCoprocessorInterface;

+ (BOOL)stopAll;
+ (BOOL)startSocksServerWithPort:(long long)a0;
+ (id)adressesForInterface:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0 port:(long long)a1 interface:(id)a2;
- (id)initWithType:(long long)a0 port:(long long)a1;
- (void)dealloc;
- (BOOL)stop;
- (id)initWithType:(long long)a0;
- (BOOL)start;

@end
