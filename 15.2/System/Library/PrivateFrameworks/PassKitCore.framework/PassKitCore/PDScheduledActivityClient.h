@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, PDScheduledActivityClient;

@interface PDScheduledActivityClient : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) id<PDScheduledActivityClient> clientInstance;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *activityQueue;
@property (retain, nonatomic) NSMutableDictionary *activityRegistrations;
@property (readonly, nonatomic) BOOL isValid;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithClientInstance:(id)a0 activityQueue:(id)a1;

@end
