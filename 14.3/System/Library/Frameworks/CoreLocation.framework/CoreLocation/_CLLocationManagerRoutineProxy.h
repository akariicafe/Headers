@class NSString, CLLocationManagerRoutine, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, CLLocationManagerDelegate;

@interface _CLLocationManagerRoutineProxy : NSObject <CLLocationManagerRoutineClientInterface> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) id<CLLocationManagerDelegate> delegate;
@property (nonatomic) CLLocationManagerRoutine *locationManagerRoutine;
@property (nonatomic) BOOL updating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
