@class TSCH3DShaderVariableLinkage, NSArray, NSString, TSCH3DShaderProgram;

@interface TSCH3DShaderAssignment : NSObject <TSCH3DShaderStatement> {
    NSString *_statement;
    TSCH3DShaderProgram *_program;
    struct vector<TSCH3DShaderVariableScopeType, std::allocator<TSCH3DShaderVariableScopeType>> { struct TSCH3DShaderVariableScopeType *__begin_; struct TSCH3DShaderVariableScopeType *__end_; struct __compressed_pair<TSCH3DShaderVariableScopeType *, std::allocator<TSCH3DShaderVariableScopeType>> { struct TSCH3DShaderVariableScopeType *__value_; } __end_cap_; } _dependeeScopes;
}

@property (readonly, nonatomic) TSCH3DShaderVariableLinkage *assignee;
@property (readonly, nonatomic) NSArray *dependees;
@property (nonatomic) struct TSCH3DShaderType { unsigned long long _value; } linkageType;
@property (readonly, nonatomic) NSString *string;
@property (readonly, nonatomic) struct TSCH3DShaderVariableScopeType { unsigned long long _value; } assigneeScope;
@property (readonly, nonatomic) BOOL isLinked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)assignmentWithAssignee:(id)a0 statement:(id)a1 dependees:(id)a2 program:(id)a3;

- (id)resolve;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)isMetal;
- (id)initWithAssigneeLinkage:(id)a0 statement:(id)a1 dependees:(id)a2 program:(id)a3;
- (void)setAssigneeScopeToType:(struct TSCH3DShaderVariableScopeType { unsigned long long x0; })a0;
- (void *)dependeeScopes;
- (id)varyingAssignmentForLinkage:(id)a0;
- (id)updateVaryingAssignmentForLinkage:(id)a0;
- (struct TSCH3DShaderType { unsigned long long x0; })dominantDependeeLinkageType;
- (id)updateDependeesWithPreviousType:(struct TSCH3DShaderType { unsigned long long x0; })a0;
- (id)resolveDependeesWithPreviousType:(struct TSCH3DShaderType { unsigned long long x0; })a0;
- (BOOL)updateLinkageTypeAddVaryingToAdditions:(id)a0;
- (id)variableDeclaration;
- (id)expressionStringForType:(struct TSCH3DShaderType { unsigned long long x0; })a0;
- (void)setGeneratedForType:(struct TSCH3DShaderType { unsigned long long x0; })a0;
- (id)forceLinkageForType:(struct TSCH3DShaderType { unsigned long long x0; })a0;

@end
