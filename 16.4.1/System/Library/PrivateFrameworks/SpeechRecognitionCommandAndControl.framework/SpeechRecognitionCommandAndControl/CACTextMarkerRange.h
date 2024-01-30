@class CACTextMarker;

@interface CACTextMarkerRange : NSObject

@property (readonly, nonatomic) CACTextMarker *startMarker;
@property (readonly, nonatomic) CACTextMarker *endMarker;

+ (id)markerRangeWithArray:(id)a0;
+ (id)markerRangeWithNSRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
+ (id)markerRangeWithStartMarker:(id)a0 endMarker:(id)a1;
+ (id)markerRangeWithStartMarker:(id)a0 endMarker:(id)a1 forTextElement:(id)a2;

- (BOOL)isEmpty;
- (id)array;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })nsRange;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)containsRange:(id)a0;
- (void).cxx_destruct;
- (BOOL)containsMarker:(id)a0;
- (id)initWithStartMarker:(id)a0 endMarker:(id)a1;

@end
