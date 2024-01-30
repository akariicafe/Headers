@class NSObject;
@protocol OS_dispatch_queue, IDSServiceDelegate;

@interface BLTTestIDSServiceDelegate : NSObject

@property (retain, nonatomic) id<IDSServiceDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;

@end
