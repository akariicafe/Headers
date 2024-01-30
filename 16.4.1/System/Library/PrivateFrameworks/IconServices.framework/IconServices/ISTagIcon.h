@class NSString;

@interface ISTagIcon : ISBindableIcon

@property (readonly) NSString *tag;
@property (readonly) NSString *tagClass;
@property (readonly) NSString *baseType;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTypeCode:(unsigned int)a0;
- (id)initWithMIMEType:(id)a0;
- (id)initWithFileExtension:(id)a0;
- (id)initWithTag:(id)a0 tagClass:(id)a1 baseType:(id)a2;
- (id)initWithFileExtension:(id)a0 baseType:(id)a1;
- (id)initWithModelCode:(id)a0;
- (id)description;
- (id)_fallbackKey;
- (id)makeResourceProvider;
- (void).cxx_destruct;

@end
