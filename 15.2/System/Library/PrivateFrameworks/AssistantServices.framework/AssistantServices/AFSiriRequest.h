@class NSString, NSUUID;

@interface AFSiriRequest : NSObject <NSSecureCoding> {
    NSUUID *_identifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic, setter=_setRefId:) NSString *_refId;
@property (copy, nonatomic, setter=_setOriginatingAceID:) NSString *_originatingAceID;
@property (copy, nonatomic, setter=_setTurnId:) NSUUID *_turnId;

- (id)_initWithOriginatingAceID:(id)a0 identifier:(id)a1 turnId:(id)a2;
- (id)_descriptionWithProperties:(id)a0;
- (id)requestName;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithOriginatingAceID:(id)a0;
- (id)_af_analyticsContextDescription;
- (id)description;
- (BOOL)_makeAppFrontmost;
- (void).cxx_destruct;
- (id)_identifier;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
