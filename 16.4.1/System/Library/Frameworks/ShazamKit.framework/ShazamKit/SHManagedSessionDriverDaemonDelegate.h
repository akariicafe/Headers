@class NSUUID, NSString;
@protocol SHSessionDriverDelegate;

@interface SHManagedSessionDriverDaemonDelegate : NSObject <SHMatcherDelegate>

@property (readonly, nonatomic) NSUUID *matchingSignatureID;
@property (readonly, nonatomic) NSUUID *inflightRequestID;
@property (weak, nonatomic) id<SHSessionDriverDelegate> sessionDriverDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)matcher:(id)a0 didProduceResponse:(id)a1;

@end
