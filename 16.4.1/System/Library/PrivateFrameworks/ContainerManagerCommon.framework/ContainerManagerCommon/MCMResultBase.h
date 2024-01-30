@class NSString, MCMError;

@interface MCMResultBase : NSObject <MCMResult_XPC, MCMResult>

@property (readonly, nonatomic) MCMError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
