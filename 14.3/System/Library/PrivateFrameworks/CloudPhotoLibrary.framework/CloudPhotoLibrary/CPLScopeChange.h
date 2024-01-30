@class CPLLibraryInfo, CPLAccountFlags, NSString, NSDate, CPLEngineScope, CPLScopedIdentifier, CPLLibraryState, CPLShare;

@interface CPLScopeChange : CPLRecordChange <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long scopeType;
@property (retain, nonatomic) CPLLibraryState *libraryState;
@property (retain, nonatomic) CPLLibraryInfo *libraryInfo;
@property (nonatomic) unsigned long long pullTaskItem;
@property (retain, nonatomic) CPLEngineScope *scope;
@property (copy, nonatomic) CPLScopedIdentifier *scopedIdentifier;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSDate *recordModificationDate;
@property (readonly, nonatomic, getter=isDisabled) BOOL disabled;
@property (readonly, nonatomic) NSDate *disabledDate;
@property (readonly, nonatomic) NSDate *deleteDate;
@property (readonly, nonatomic) CPLAccountFlags *accountFlags;
@property (retain, nonatomic) CPLShare *share;
@property (nonatomic, getter=isActivated) BOOL activated;

+ (id)newDeleteScopeChangeWithScopeIdentifier:(id)a0 type:(long long)a1;
+ (id)newScopeChangeWithScopeIdentifier:(id)a0 type:(long long)a1;
+ (id)descriptionForScopeType:(long long)a0;
+ (Class)scopeChangeClassForType:(long long)a0;
+ (id)mappingForScopeTypeDescription;
+ (BOOL)shouldAutoActivateScopeWithType:(long long)a0;
+ (id)newScopeChangeInferClassWithScopeIdentifier:(id)a0 type:(long long)a1;
+ (BOOL)cplShouldIgnorePropertyForEquality:(id)a0;

- (void).cxx_destruct;
- (id)redactedDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)_scopedIdentifier;
- (id)assetCountPerType;
- (id)scopeIdentifier;
- (void)_setChangeType:(unsigned long long)a0;
- (id)initWithScopeIdentifier:(id)a0 type:(long long)a1;
- (long long)defaultFlags;
- (void)udpateScopeFromScopeChange:(id)a0 direction:(unsigned long long)a1 didHaveChanges:(BOOL *)a2;

@end
