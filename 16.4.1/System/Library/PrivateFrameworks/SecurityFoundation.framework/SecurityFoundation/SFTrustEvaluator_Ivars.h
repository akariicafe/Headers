@class SFRevocationPolicy, SFTrustPolicy, NSArray;

@interface SFTrustEvaluator_Ivars : NSObject {
    SFTrustPolicy *trustPolicy;
    SFRevocationPolicy *revocationPolicy;
    NSArray *applicationAnchorCertificates;
    struct { unsigned char allowCertificateFetching : 1; unsigned char trustSystemAnchorCertificates : 1; } trustEvaluatorFlags;
}

- (void).cxx_destruct;

@end
