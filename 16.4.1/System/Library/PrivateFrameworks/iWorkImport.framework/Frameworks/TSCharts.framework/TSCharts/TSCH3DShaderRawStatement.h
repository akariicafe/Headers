@class NSString;

@interface TSCH3DShaderRawStatement : NSObject <TSCH3DShaderStatement>

@property (readonly, nonatomic) NSString *string;
@property (nonatomic) struct TSCH3DShaderType { unsigned long long _value; } linkageType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)statementWithString:(id)a0 linkageType:(struct TSCH3DShaderType { unsigned long long x0; })a1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)resolve;
- (BOOL)isLinked;
- (id)initWithString:(id)a0 linkageType:(struct TSCH3DShaderType { unsigned long long x0; })a1;
- (void)setGeneratedForType:(struct TSCH3DShaderType { unsigned long long x0; })a0;

@end
