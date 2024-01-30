@class NSString, TSCH3DShaderVariable;

@interface TSCH3DShaderLinkedVariable : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) TSCH3DShaderVariable *variable;
@property (nonatomic) struct TSCH3DShaderVariableScopeType { unsigned long long mValue; } scope;

+ (id)linkedVariable;

- (void)dealloc;
- (id)description;
- (id).cxx_construct;
- (BOOL)isAttribute;
- (id)inputVariableName;

@end
