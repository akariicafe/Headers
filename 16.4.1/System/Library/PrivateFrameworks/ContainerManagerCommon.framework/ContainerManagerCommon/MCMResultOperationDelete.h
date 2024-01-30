@class NSObject;
@protocol OS_xpc_object;

@interface MCMResultOperationDelete : MCMResultWithContainersArrayBase

@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcToMerge;

- (BOOL)encodeResultOntoReply:(id)a0;
- (void).cxx_destruct;
- (void)mergeWithXPCResult:(id)a0;

@end
