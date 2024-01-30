@class CACTextMarker;

@interface CACTextMarkerRange : NSObject

@property (readonly, nonatomic) CACTextMarker *startMarker;
@property (readonly, nonatomic) CACTextMarker *endMarker;

+ (id)markerRangeWithStartMarker:(id)a0 endMarker:(id)a1;
+ (id)markerRangeWithNSRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
+ (id)markerRangeWithStartMarker:(id)a0 endMarker:(id)a1 forTextElement:(id)a2;
+ (id)markerRangeWithArray:(id)a0;

- (id)description;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)array;
- (unsigned long long)hash;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })nsRange;
- (id)initWithStartMarker:(id)a0 endMarker:(id)a1;
- (BOOL)containsMarker:(id)a0 forUIElement:(id)a1;
- (BOOL)containsRange:(id)a0 forUIElement:(id)a1;

@end
