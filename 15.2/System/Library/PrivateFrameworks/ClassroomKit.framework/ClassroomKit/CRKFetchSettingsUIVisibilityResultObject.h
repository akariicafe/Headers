@interface CRKFetchSettingsUIVisibilityResultObject : CATTaskResultObject

@property (nonatomic) BOOL settingsUIVisible;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
