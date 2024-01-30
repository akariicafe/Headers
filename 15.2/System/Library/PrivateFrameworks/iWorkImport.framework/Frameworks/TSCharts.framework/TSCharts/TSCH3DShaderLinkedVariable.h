@class NSString, TSCH3DShaderVariable;

@interface TSCH3DShaderLinkedVariable : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) TSCH3DShaderVariable *variable;
@property (nonatomic) struct TSCH3DShaderVariableScopeType { unsigned long long _value; } scope;

+ (id)linkedVariable;

- (id)description;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)isAttribute;
- (id)inputVariableName;

@end
