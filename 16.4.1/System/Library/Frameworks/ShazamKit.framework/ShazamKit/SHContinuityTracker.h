@interface SHContinuityTracker : NSObject

+ (long long)mergePolicyToSignatureAlignmentMergeMode:(long long)a0;
+ (id)trackQuerySignature:(id)a0 inReferenceSignature:(id)a1 error:(id *)a2;
+ (id)trackQuerySignature:(id)a0 inReferenceSignature:(id)a1 usingMergePolicy:(long long)a2 error:(id *)a3;
+ (id)trackedResultFromSignatureAlignment:(id)a0;

@end
