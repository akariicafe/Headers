@class NSString;
@protocol NSFileProviderItem;

@interface FPTestingCollisionResolution : FPTestingOperation <NSFileProviderTestingCollisionResolution>

@property (readonly, nonatomic) long long snapshotVersion;
@property (readonly, nonatomic) unsigned long long side;
@property (readonly, nonatomic) id<NSFileProviderItem> renamedItem;
@property (readonly, nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)asCollisionResolution;
- (id)initWithOperationIdentifier:(id)a0 renamedItem:(id)a1 snapshotVersion:(long long)a2;

@end
