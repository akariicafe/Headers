@protocol NSObject, NSCopying;

@interface PXSectionedObjectReference : NSObject <NSCopying>

@property (readonly, copy, nonatomic) id<NSObject, NSCopying> sectionObject;
@property (readonly, copy, nonatomic) id<NSObject, NSCopying> itemObject;
@property (readonly, copy, nonatomic) id<NSObject, NSCopying> subitemObject;
@property (readonly, nonatomic) struct PXSimpleIndexPath { unsigned long long dataSourceIdentifier; long long section; long long item; long long subitem; } indexPath;
@property (readonly, copy, nonatomic) id<NSObject, NSCopying> leafObject;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSectionObject:(id)a0 itemObject:(id)a1 subitemObject:(id)a2 indexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a3;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
