@interface _LSDServiceDomain : NSObject {
    struct optional<unsigned int> { union { char __null_state_; unsigned int __val_; } ; BOOL __engaged_; } _resolvedDomainUID;
    unsigned short _specifierType;
}

+ (id)defaultServiceDomainIndirect;

- (id).cxx_construct;
- (id)debugDescription;

@end
