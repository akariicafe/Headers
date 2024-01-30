@class NSArray;

@interface STAlwaysAllowList : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *allowedBundleIDs;
@property (nonatomic) BOOL shouldAllowEditing;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBlueprint:(id)a0;

@end
