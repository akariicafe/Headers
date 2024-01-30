@class NSString;

@interface WFMachineReadableCode : NSObject <NSSecureCoding, WFSerializableContent, WFNaming>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, copy, nonatomic) NSString *stringValue;
@property (readonly, copy, nonatomic) NSString *errorCorrectionLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *wfName;

+ (id)objectWithWFSerializedRepresentation:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithMachineReadableCodeObject:(id)a0;
- (id)wfSerializedRepresentation;
- (id)initWithType:(id)a0 stringValue:(id)a1 errorCorrectionLevel:(id)a2;

@end
