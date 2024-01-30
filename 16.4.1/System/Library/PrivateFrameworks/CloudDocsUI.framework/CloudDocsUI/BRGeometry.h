@class NSString, NSArray;

@interface BRGeometry : NSObject <NSCoding>

@property (copy, nonatomic) NSString *name;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } absoluteFrame;
@property (nonatomic) BOOL hasAmbiguousLayout;
@property (nonatomic) BOOL isClipped;
@property (copy, nonatomic) NSString *contentDescription;
@property (copy, nonatomic) NSArray *subitems;

+ (void)initialize;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)recursiveDescription;
- (id)data;
- (id)initWithView:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)gatherSubviews:(id)a0;
- (id)initWithView:(id)a0 rootView:(id)a1;
- (BOOL)isEqualToTemplate:(id)a0 diagnostic:(id *)a1;
- (BOOL)isValidForGeometryValidation:(unsigned long long)a0 offendingGeometry:(id *)a1;

@end
