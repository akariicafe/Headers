@class NSUUID, NSString, TUThumperCTCapabilitiesState, TUCTCapabilitiesState;

@interface TUSenderIdentityCapabilitiesState : NSObject <NSSecureCoding, NSCopying, TUPubliclyAccessibleCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *senderIdentityUUID;
@property (nonatomic) BOOL supportsSimultaneousVoiceAndData;
@property (copy, nonatomic) TUCTCapabilitiesState *csCallingCapabilitiesState;
@property (copy, nonatomic) TUCTCapabilitiesState *voLTECallingCapabilitiesState;
@property (copy, nonatomic) TUCTCapabilitiesState *wiFiCallingCapabilitiesState;
@property (copy, nonatomic) TUThumperCTCapabilitiesState *thumperCallingCapabilitiesState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)publiclyAccessibleCopyWithZone:(struct _NSZone { } *)a0;
- (id)publiclyAccessibleCopy;
- (id)initWithSenderIdentityUUID:(id)a0;

@end
