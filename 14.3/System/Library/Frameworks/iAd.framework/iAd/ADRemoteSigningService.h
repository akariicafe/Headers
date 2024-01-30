@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface ADRemoteSigningService : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *signingQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *signingGroup;
@property (nonatomic) BOOL didLeaveGroup;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)signedCredentialForRequest:(id)a0 withPersistence:(unsigned long long)a1;
- (id)signedCredentialForUrl:(id)a0 userAgent:(id)a1 withPersistence:(unsigned long long)a2;

@end
