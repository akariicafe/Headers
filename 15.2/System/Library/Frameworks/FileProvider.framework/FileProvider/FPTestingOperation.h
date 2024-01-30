@class NSString;

@interface FPTestingOperation : NSObject <NSFileProviderTestingOperation, NSSecureCoding, NSCopying> {
    NSString *_operationIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)asDeletion;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)asLookup;
- (id)initWithOperationIdentifier:(id)a0;
- (id)asIngestion;
- (id)asCreation;
- (id)asModification;
- (id)asContentFetch;
- (id)asChildrenEnumeration;
- (id)asCollisionResolution;

@end
