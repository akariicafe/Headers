@class HDFHIRCredential;

@interface _HDWrappedFHIRCredential : NSObject

@property (readonly, copy, nonatomic) HDFHIRCredential *originalCredential;
@property (readonly, copy, nonatomic) HDFHIRCredential *refreshedCredential;
@property (getter=isInvalidated) BOOL invalidated;

- (void).cxx_destruct;
- (id)_initWithCredential:(id)a0;
- (void)didRefreshCredential:(id)a0;

@end
