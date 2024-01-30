@class LNValueType, NSString, NSArray, NSNumber;

@interface LNAction : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long presentationStyle;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *mangledTypeName;
@property (readonly, nonatomic) BOOL openAppWhenRun;
@property (readonly, nonatomic) NSNumber *outputFlags;
@property (readonly, nonatomic) LNValueType *outputType;
@property (readonly, copy, nonatomic) NSArray *systemProtocols;
@property (readonly, copy, nonatomic) NSArray *parameters;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)initWithIdentifier:(id)a0 parameters:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)actionWithOpenWhenRun:(BOOL)a0;
- (id)actionWithParameters:(id)a0;
- (id)actionWithPresentationStyle:(long long)a0;
- (void)enumerateParameterValuesOfValueType:(id)a0 block:(id /* block */)a1;
- (id)initWithIdentifier:(id)a0 mangledTypeName:(id)a1 openAppWhenRun:(BOOL)a2 outputFlags:(id)a3 outputType:(id)a4 parameters:(id)a5;
- (id)initWithIdentifier:(id)a0 mangledTypeName:(id)a1 openAppWhenRun:(BOOL)a2 outputFlags:(id)a3 outputType:(id)a4 systemProtocols:(id)a5 parameters:(id)a6;
- (id)initWithIdentifier:(id)a0 mangledTypeName:(id)a1 openAppWhenRun:(BOOL)a2 parameters:(id)a3;
- (id)initWithIdentifier:(id)a0 mangledTypeName:(id)a1 presentationStyle:(long long)a2 parameters:(id)a3;
- (id)initWithIdentifier:(id)a0 presentationStyle:(long long)a1 parameters:(id)a2;
- (id)initWithMetadata:(id)a0 bundleIdentifier:(id)a1 parameters:(id)a2;

@end
