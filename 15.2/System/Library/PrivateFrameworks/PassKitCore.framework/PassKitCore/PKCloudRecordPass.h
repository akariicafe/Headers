@class PKPass;

@interface PKCloudRecordPass : PKCloudRecordObject

@property (retain, nonatomic) PKPass *pass;

+ (BOOL)supportsSecureCoding;

- (long long)compare:(id)a0;
- (id)_descriptionWithIncludeItem:(BOOL)a0;
- (void)encodeWithCoder:(id)a0;
- (void)applyCloudRecordObject:(id)a0;
- (id)description;
- (id)descriptionWithItem:(BOOL)a0;
- (void).cxx_destruct;
- (id)item;
- (id)initWithCoder:(id)a0;

@end
