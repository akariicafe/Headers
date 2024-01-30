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

- (id)initForProtobufDecoding;
- (void)appendDescriptionToFormatter:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithIdentifier:(unsigned int)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_isIdentifierOfCAContext;
- (BOOL)_isString;
- (BOOL)isEqual:(id)a0;
- (unsigned int)_identifierOfCAContext;
- (id)didFinishProtobufDecodingWithError:(out id *)a0;
- (id)_initWithString:(id)a0;
- (id)_string;
- (void)encodeWithCoder:(id)a0;

@end
