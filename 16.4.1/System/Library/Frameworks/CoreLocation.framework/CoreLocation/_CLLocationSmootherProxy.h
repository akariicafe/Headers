@class CLLocationSmoother, NSString, NSXPCConnection, NSObject;
@protocol CLLocationSmootherDelegate, OS_dispatch_queue;

@interface _CLLocationSmootherProxy : NSObject <CLLocationSmootherClientInterface> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) id<CLLocationSmootherDelegate> delegate;
@property (nonatomic) CLLocationSmoother *locationManagerSmoother;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
