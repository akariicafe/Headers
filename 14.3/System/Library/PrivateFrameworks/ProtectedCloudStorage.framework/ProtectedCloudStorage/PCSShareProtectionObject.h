@interface PCSShareProtectionObject : NSObject {
    struct _PCSIdentityData { } *_identity;
}

@property (readonly, nonatomic) struct _OpaquePCSShareProtection { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct _PCSIdentitySetData *x1; struct _PCSIdentitySetData *x2; struct _PCSIdentitySetData *x3; struct __CFDictionary *x4; struct __CFArray *x5; struct __CFData *x6; struct __CFData *x7; struct __CFData *x8; struct _PCSKeyData *x9; struct __CFData *x10; struct _PCSKeyData *x11; struct __CFDictionary *x12; unsigned int x13; unsigned int x14; struct PCSAttributes { unsigned int x0; struct PCSTypeValue *x1; } x15; struct _PCSPublicIdentityData *x16; struct _PCSPublicIdentityData *x17; struct _PCSPublicIdentityData *x18; struct _PCSPublicIdentityData *x19; struct _PCSIdentityData *x20; struct _PCSIdentityData *x21; unsigned int x22; int x23; struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; } x24; unsigned int x25; } *shareProtection;

- (void)dealloc;
- (id)sharingRequestDataForIdentity:(struct _PCSPublicIdentityData { } *)a0 flags:(unsigned int)a1 error:(id *)a2;
- (id)sharingRequestDataForIdentity:(struct _PCSPublicIdentityData { } *)a0 owner:(void *)a1 flags:(unsigned int)a2 error:(id *)a3;
- (id)initWithShareProtectionRef:(struct _OpaquePCSShareProtection { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct _PCSIdentitySetData *x1; struct _PCSIdentitySetData *x2; struct _PCSIdentitySetData *x3; struct __CFDictionary *x4; struct __CFArray *x5; struct __CFData *x6; struct __CFData *x7; struct __CFData *x8; struct _PCSKeyData *x9; struct __CFData *x10; struct _PCSKeyData *x11; struct __CFDictionary *x12; unsigned int x13; unsigned int x14; struct PCSAttributes { unsigned int x0; struct PCSTypeValue *x1; } x15; struct _PCSPublicIdentityData *x16; struct _PCSPublicIdentityData *x17; struct _PCSPublicIdentityData *x18; struct _PCSPublicIdentityData *x19; struct _PCSIdentityData *x20; struct _PCSIdentityData *x21; unsigned int x22; int x23; struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; } x24; unsigned int x25; } *)a0;
- (id)initWithSharingRequestData:(id)a0 identitySet:(struct _PCSIdentitySetData { } *)a1 error:(id *)a2;
- (id)sharingRequestDataForIdentity:(struct _PCSPublicIdentityData { } *)a0 error:(id *)a1;
- (id)exportAcceptedSharingRequestWithError:(id *)a0;

@end
