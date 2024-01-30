@class NSString;

@interface BKSHIDEventDeferringToken : NSObject <NSSecureCoding, BSProtobufSerializable, BSDescriptionStreamable, NSCopying> {
    unsigned int _CAContextID;
    NSString *_stringIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tokenForString:(id)a0;
+ (id)protobufSchema;
+ (id)tokenForIdentifierOfCAContext:(unsigned int)a0;

- (void)encodeWithCoder:(id)a0;
- (id)didFinishProtobufDecodingWithError:(out id *)a0;
- (id)initForProtobufDecoding;
- (id)initWithCoder:(id)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (id)_initWithString:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_string;
- (BOOL)isEqual:(id)a0;
- (id)_initWithIdentifier:(unsigned int)a0;
- (BOOL)_isString;
- (id)init;
- (BOOL)_isIdentifierOfCAContext;
- (unsigned int)_identifierOfCAContext;
- (void).cxx_destruct;

@end
