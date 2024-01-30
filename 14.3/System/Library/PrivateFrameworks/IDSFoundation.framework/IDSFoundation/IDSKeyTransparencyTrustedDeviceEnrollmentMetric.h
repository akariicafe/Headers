@class NSString, NSDictionary;

@interface IDSKeyTransparencyTrustedDeviceEnrollmentMetric : NSObject <CUTRTCMetric>

@property (readonly, nonatomic) unsigned long long keyTransparencyVersion;
@property (readonly, nonatomic) BOOL cloudKitSuccess;
@property (readonly, nonatomic) NSString *cloudKitErrorDomain;
@property (readonly, nonatomic) long long cloudKitErrorCode;
@property (readonly, nonatomic) NSString *cloudKitUnderlyingErrorDomain;
@property (readonly, nonatomic) long long cloudKitUnderlyingErrorCode;
@property (readonly, nonatomic) double cloudKitOperationTimeInterval;
@property (readonly, nonatomic) BOOL accountKeySuccess;
@property (readonly, nonatomic) NSString *accountKeyErrorDomain;
@property (readonly, nonatomic) long long accountKeyErrorCode;
@property (readonly, nonatomic) NSString *accountKeyUnderlyingErrorDomain;
@property (readonly, nonatomic) long long accountKeyUnderlyingErrorCode;
@property (readonly, nonatomic) double accountKeyOperationTimeInterval;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned short rtcType;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithKeyTransparencyVersion:(unsigned long long)a0 cloudKitSuccess:(BOOL)a1 cloudKitErrorDomain:(id)a2 cloudKitErrorCode:(long long)a3 cloudKitUnderlyingErrorDomain:(id)a4 cloudKitUnderlyingErrorCode:(long long)a5 cloudKitOperationTimeInterval:(double)a6 accountKeySuccess:(BOOL)a7 accountKeyErrorDomain:(id)a8 accountKeyErrorCode:(long long)a9 accountKeyUnderlyingErrorDomain:(id)a10 accountKeyUnderlyingErrorCode:(long long)a11 accountKeyOperationTimeInterval:(double)a12;

@end
