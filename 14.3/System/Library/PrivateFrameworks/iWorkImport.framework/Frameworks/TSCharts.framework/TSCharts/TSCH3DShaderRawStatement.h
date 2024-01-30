@class NSString;

@interface TSCH3DShaderRawStatement : NSObject <TSCH3DShaderStatement>

@property (readonly, nonatomic) NSString *string;
@property (nonatomic) struct TSCH3DShaderType { unsigned long long mValue; } linkageType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)statementWithString:(id)a0 linkageType:(struct TSCH3DShaderType { unsigned long long x0; })a1;

- (void)dealloc;
- (id).cxx_construct;
- (BOOL)isLinked;
- (id)resolve;
- (void)setGeneratedForType:(struct TSCH3DShaderType { unsigned long long x0; })a0;
- (id)initWithString:(id)a0 linkageType:(struct TSCH3DShaderType { unsigned long long x0; })a1;

@end
