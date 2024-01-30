@class HDFHIRCredentialResult;

@interface _HDFHIRCredentialResultPromise : NSObject {
    HDFHIRCredentialResult *_result;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _resultLock;
}

@property (readonly, nonatomic) HDFHIRCredentialResult *result;

- (id)init;
- (void).cxx_destruct;
- (void)fulfillWithResult:(id)a0;

@end
