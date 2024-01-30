@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface ADCanonicalRequest : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *signingQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *signingGroup;
@property (nonatomic) BOOL didLeaveGroup;

+ (id)sharedInstance;

- (id)canonicalRequestForRequest:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
