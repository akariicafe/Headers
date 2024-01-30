@class PHVideoRequestBehaviorSpec;

@interface PHVideoXPCRequest : PHResourceRequest

@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) PHVideoRequestBehaviorSpec *behaviorSpec;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithTaskIdentifier:(id)a0 assetObjectID:(id)a1 size:(struct CGSize { double x0; double x1; })a2 behavior:(id)a3;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
