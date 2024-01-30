@class NSArray, NSString, NSUUID;
@protocol HMFRTCSessionFactory;

@interface HMFQueuingLogBackendOperation : NSOperation {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    long long _operationState;
}

@property (readonly, nonatomic) NSArray *messages;
@property (readonly, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) NSUUID *sessionUUID;
@property (readonly, nonatomic) BOOL isRealtime;
@property (readonly, nonatomic) id<HMFRTCSessionFactory> rtcFactory;
@property (readonly, nonatomic) id /* block */ staleSessionBlock;

+ (id)logCategory;

- (BOOL)isExecuting;
- (BOOL)isFinished;
- (BOOL)isAsynchronous;
- (void)start;
- (void).cxx_destruct;
- (void)changeOperationState:(long long)a0;
- (id)initWithMessages:(id)a0 serviceName:(id)a1 sessionUUID:(id)a2 isRealtime:(BOOL)a3 rtcFactory:(id)a4 staleSessionBlock:(id /* block */)a5;

@end
