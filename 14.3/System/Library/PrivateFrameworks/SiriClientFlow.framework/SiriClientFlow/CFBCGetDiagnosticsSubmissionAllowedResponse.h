@class NSString;

@interface CFBCGetDiagnosticsSubmissionAllowedResponse : SABaseCommand <SAServerBoundCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL allowed;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)aceObjectWithDictionary:(id)a0 context:(id)a1;
+ (id)getDiagnosticsSubmissionAllowedResponse;
+ (id)getDiagnosticsSubmissionAllowedResponseWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
