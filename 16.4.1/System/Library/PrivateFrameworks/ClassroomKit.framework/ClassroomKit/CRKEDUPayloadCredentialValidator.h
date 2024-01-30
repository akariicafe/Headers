@class CRKEDUPayload;

@interface CRKEDUPayloadCredentialValidator : NSObject

@property (readonly, nonatomic) CRKEDUPayload *payload;
@property (readonly, nonatomic, getter=isStub) BOOL stub;
@property (readonly, nonatomic, getter=isEphemeralMultiUserDevice) BOOL ephemeralMultiUserDevice;

- (BOOL)isInstructor;
- (BOOL)isStudent;
- (void).cxx_destruct;
- (BOOL)validateLeaderAnchorsWithError:(id *)a0;
- (BOOL)validateMemberAnchorsWithError:(id *)a0;
- (BOOL)areCredentialsValidForOneToOneDeviceWithError:(id *)a0;
- (BOOL)areCredentialsValidForSharediPadDeviceWithError:(id *)a0;
- (BOOL)areCredentialsValidWithError:(id *)a0;
- (BOOL)hasPayloadCertificate;
- (id)initWithPayload:(id)a0 isStub:(BOOL)a1 isEphemeralMultiUserDevice:(BOOL)a2;
- (BOOL)validateAnchorsWithKeyPath:(id)a0 payloadKey:(id)a1 error:(id *)a2;

@end
