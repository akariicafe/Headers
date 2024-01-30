@interface CRKFetchSettingsUIVisibilityResultObject : CATTaskResultObject

@property (nonatomic) BOOL settingsUIVisible;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
