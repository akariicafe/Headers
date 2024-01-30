@class TSCH3DShaderVariableLinkage, NSArray, NSString, TSCH3DShaderProgram;

@interface TSCH3DShaderAssignment : NSObject <TSCH3DShaderStatement> {
    NSString *mStatement;
    TSCH3DShaderProgram *mProgram;
    struct vector<TSCH3DShaderVariableScopeType, std::__1::allocator<TSCH3DShaderVariableScopeType> > { struct TSCH3DShaderVariableScopeType *__begin_; struct TSCH3DShaderVariableScopeType *__end_; struct __compressed_pair<TSCH3DShaderVariableScopeType *, std::__1::allocator<TSCH3DShaderVariableScopeType> > { struct TSCH3DShaderVariableScopeType *__value_; } __end_cap_; } mDependeeScopes;
}

@property (readonly, nonatomic) TSCH3DShaderVariableLinkage *assignee;
@property (readonly, nonatomic) NSArray *dependees;
@property (nonatomic) struct TSCH3DShaderType { unsigned long long mValue; } linkageType;
@property (readonly, nonatomic) NSString *string;
@property (readonly, nonatomic) struct TSCH3DShaderVariableScopeType { unsigned long long mValue; } assigneeScope;
@property (readonly, nonatomic) BOOL isLinked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)assignmentWithAssignee:(id)a0 statement:(id)a1 dependees:(id)a2 program:(id)a3;

- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (id)resolve;
- (BOOL)isMetal;
- (id)initWithAssigneeLinkage:(id)a0 statement:(id)a1 dependees:(id)a2 program:(id)a3;
- (void)setAssigneeScopeToType:(struct TSCH3DShaderVariableScopeType { unsigned long long x0; })a0;
- (struct vector<TSCH3DShaderVariableScopeType, std::__1::allocator<TSCH3DShaderVariableScopeType> > { struct TSCH3DShaderVariableScopeType *x0; struct TSCH3DShaderVariableScopeType *x1; struct __compressed_pair<TSCH3DShaderVariableScopeType *, std::__1::allocator<TSCH3DShaderVariableScopeType> > { struct TSCH3DShaderVariableScopeType *x0; } x2; } *)dependeeScopes;
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
