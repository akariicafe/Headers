@class NSString;
@protocol SFDigestOperation;

@interface SFMaskGenerationFunction1 : NSObject <SFMaskGenerationFunction> {
    id _mgf1OperationInternal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) id<SFDigestOperation> digestOperation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)generateMaskWithLength:(long long)a0 data:(id)a1 error:(id)a2;
- (id)initWithDigestOperation:(id)a0;

@end
