@class NSMutableDictionary, CHEncodedStrokeIdentifier;

@interface CHNonTextCandidateStroke : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long classificationAsNonText;
@property (readonly, nonatomic) long long substrokesCount;
@property (readonly, retain, nonatomic) NSMutableDictionary *supportByStrokeIdentifier;
@property (readonly, nonatomic) double lineError;
@property (readonly, nonatomic) double containerScore;
@property (readonly, nonatomic) double lineOrientationAngle;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (readonly, nonatomic) double boundsDiagonal;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } enlargedBounds;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rotatedBounds;
@property (readonly, retain, nonatomic) CHEncodedStrokeIdentifier *strokeIdentifier;
@property (readonly, nonatomic) long long effectiveClassification;
@property (readonly, nonatomic) double support;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithStrokeIdentifier:(id)a0 substrokesCount:(long long)a1 classificationAsNonText:(long long)a2 lineOrientation:(double)a3 lineError:(double)a4 containerScore:(double)a5 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a6 boundsDiagonal:(double)a7 enlargedBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a8 rotatedBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a9 supportByStrokeIdentifier:(id)a10 support:(double)a11;
- (BOOL)isEqualToNonTextCandidateStroke:(id)a0;
- (id)initWithStroke:(id)a0 consistingOfSubstrokes:(id)a1 classificationAsNonText:(long long)a2 lineOrientation:(double)a3 lineError:(double)a4 containerScore:(double)a5;

@end
