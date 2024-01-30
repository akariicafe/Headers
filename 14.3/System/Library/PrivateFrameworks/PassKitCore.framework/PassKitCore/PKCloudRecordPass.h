@class PKPass;

@interface PKCloudRecordPass : PKCloudRecordObject

@property (retain, nonatomic) PKPass *pass;

+ (BOOL)supportsSecureCoding;

- (id)item;
- (void).cxx_destruct;
- (id)_descriptionWithIncludeItem:(BOOL)a0;
- (id)descriptionWithItem:(BOOL)a0;
- (void)applyCloudRecordObject:(id)a0;
- (long long)compare:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
