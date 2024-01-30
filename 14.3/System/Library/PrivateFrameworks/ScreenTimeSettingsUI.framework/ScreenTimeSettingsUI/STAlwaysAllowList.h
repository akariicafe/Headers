@class NSArray;

@interface STAlwaysAllowList : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *allowedBundleIDs;
@property (nonatomic) BOOL shouldAllowEditing;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBlueprint:(id)a0;

@end
