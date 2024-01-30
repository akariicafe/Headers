@interface HMDAccessorySettingMessageMapper : HMDSettingMessageMapper

@property (nonatomic) BOOL shouldAllowSharedAdminToEditConstraints;

- (id)initWithIdentifier:(id)a0 queue:(id)a1 allowSharedAdminEditConstraints:(BOOL)a2;

@end
