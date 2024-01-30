@class SHManagedSessionDriverDaemonDelegate, NSUUID, NSString;
@protocol SHMatcher, SHMatcherDelegate, SHSessionDriverDelegate;

@interface SHManagedSessionDriver : NSObject <SHSessionDriver>

@property (readonly, nonatomic) SHManagedSessionDriverDaemonDelegate *daemonDelegate;
@property (readonly, nonatomic) id<SHMatcher, SHMatcherDelegate> serviceConnection;
@property (weak, nonatomic) id<SHSessionDriverDelegate> sessionDriverDelegate;
@property (readonly, nonatomic) NSUUID *matchingSignatureID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
