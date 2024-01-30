@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface _DECFeedbackProvider : NSObject {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;
+ (void)setCategory:(unsigned long long)a0;
+ (void)userEngaged:(id)a0 result:(id)a1 metadata:(id)a2;
+ (void)userAbandoned:(id)a0 result:(id)a1 metadata:(id)a2;

- (id)init;
- (void).cxx_destruct;

@end
