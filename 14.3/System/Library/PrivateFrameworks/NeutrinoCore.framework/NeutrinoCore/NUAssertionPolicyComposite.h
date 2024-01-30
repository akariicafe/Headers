@class NSString, NSMutableArray;

@interface NUAssertionPolicyComposite : NSObject <NUAssertionPolicyHandler>

@property (readonly) NSMutableArray *policies;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
