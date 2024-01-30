@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CNLoggingContext : NSObject {
    void *_aslClient;
    NSObject<OS_dispatch_queue> *_aslQueue;
}

@property (readonly, copy, nonatomic) NSString *category;
@property (readonly, copy, nonatomic) NSString *subsystem;

+ (id)loggingContextWithSubsystem:(id)a0 category:(id)a1;

- (id)loggingName;
- (void)setupASL;
- (id)aslQueue;
- (id)initWithSubsystem:(id)a0 category:(id)a1;
- (void).cxx_destruct;
- (struct __asl_object_s { } *)aslClient;

@end
