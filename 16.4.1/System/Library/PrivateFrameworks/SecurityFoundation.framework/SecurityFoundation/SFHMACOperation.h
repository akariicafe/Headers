@protocol SFDigestOperation;

@interface SFHMACOperation : SFMessageAuthenticationCodeOperation {
    id _hmacOperationInternal;
}

@property (copy, nonatomic) id<SFDigestOperation> digestOperation;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDigestOperation:(id)a0;

@end
