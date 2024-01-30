@class NSUUID;

@interface PRUIModalEntryPointPosterSelectionResponse : PRUIModalEntryPointResponse

@property (readonly, nonatomic) NSUUID *configurationUUID;

- (id)initWithBSXPCCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithResult:(long long)a0 configurationUUID:(id)a1;

@end
