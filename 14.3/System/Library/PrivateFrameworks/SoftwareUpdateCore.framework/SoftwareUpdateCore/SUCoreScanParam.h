@class NSError, SUCoreDescriptor;

@interface SUCoreScanParam : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long resultCode;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) SUCoreDescriptor *descriptor;
@property (retain, nonatomic) SUCoreDescriptor *fallbackDescriptor;
@property (retain, nonatomic) SUCoreDescriptor *majorPrimaryDescriptor;
@property (retain, nonatomic) SUCoreDescriptor *majorSecondaryDescriptor;
@property (retain, nonatomic) SUCoreDescriptor *minorPrimaryDescriptor;
@property (retain, nonatomic) SUCoreDescriptor *minorSecondaryDescriptor;

- (id)summary;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithResult:(long long)a0 withError:(id)a1;
- (id)initWithDescriptor:(id)a0 withFallbackDescriptor:(id)a1;
- (id)initWithMajorPrimaryDescriptor:(id)a0 majorSecondaryDescriptor:(id)a1 minorPrimaryDescriptor:(id)a2 minorSecondaryDescriptor:(id)a3;

@end
