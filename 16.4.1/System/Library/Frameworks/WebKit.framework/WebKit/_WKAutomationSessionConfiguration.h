@interface _WKAutomationSessionConfiguration : NSObject <NSCopying>

@property (nonatomic) BOOL acceptInsecureCertificates;
@property (nonatomic) BOOL allowsInsecureMediaCapture;
@property (nonatomic) BOOL suppressesICECandidateFiltering;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
