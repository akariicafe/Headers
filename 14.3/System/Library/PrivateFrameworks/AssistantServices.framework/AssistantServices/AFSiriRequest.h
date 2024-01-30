@class NSString, NSUUID;

@interface AFSiriRequest : NSObject <NSSecureCoding> {
    NSUUID *_identifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic, setter=_setRefId:) NSString *_refId;
@property (copy, nonatomic, setter=_setOriginatingAceID:) NSString *_originatingAceID;

- (id)init;
- (void).cxx_destruct;
- (id)_identifier;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)_initWithOriginatingAceID:(id)a0 identifier:(id)a1;
- (id)_descriptionWithProperties:(id)a0;
- (id)requestName;
- (id)_initWithOriginatingAceID:(id)a0;
- (BOOL)_makeAppFrontmost;
- (id)_af_analyticsContextDescription;
- (void)encodeWithCoder:(id)a0;

@end
