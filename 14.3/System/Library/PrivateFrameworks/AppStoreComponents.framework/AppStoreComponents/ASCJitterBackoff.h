@class NSString, ASCExponentialBackoff;

@interface ASCJitterBackoff : NSObject <ASCBackoff>

@property (readonly, nonatomic) ASCExponentialBackoff *exponentialBackoff;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
