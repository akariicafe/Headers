@class NSMutableArray, NSMutableDictionary;

@interface SBDodgingModel : NSObject <NSMutableCopying>

@property (retain, nonatomic) NSMutableArray *identifiers;
@property (retain, nonatomic) NSMutableDictionary *centersForIdentifiers;
@property (retain, nonatomic) NSMutableDictionary *sizesForIdentifiers;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } referenceBounds;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)modelByModifyingModelWithBlock:(id /* block */)a0;
- (id)initWithReferenceBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeForIdentifier:(id)a0;
- (struct CGPoint { double x0; double x1; })centerForIdentifier:(id)a0;

@end
