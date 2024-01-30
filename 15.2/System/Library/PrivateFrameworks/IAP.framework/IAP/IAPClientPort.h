@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface IAPClientPort : NSObject

@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sendDataHandlerQueue;
@property (nonatomic) id /* block */ sendDataHandler;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientPortEventQueue;

- (void)dealloc;
- (id)initWithUUID:(id)a0 queue:(id)a1 sendHandler:(id /* block */)a2;

@end
