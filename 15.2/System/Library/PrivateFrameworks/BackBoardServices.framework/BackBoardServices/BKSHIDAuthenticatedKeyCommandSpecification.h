@class NSString, BKSHIDEventKeyCommand;

@interface BKSHIDAuthenticatedKeyCommandSpecification : NSObject <NSSecureCoding, BSProtobufSerializable, BSDescriptionStreamable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long context;
@property (retain, nonatomic) BKSHIDEventKeyCommand *keyCommand;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)specificationWithKeyCommand:(id)a0 context:(unsigned long long)a1;
+ (id)protobufSchema;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_init;
- (id)initWithCoder:(id)a0;
- (id)initForProtobufDecoding;
- (void)appendDescriptionToFormatter:(id)a0;

@end
