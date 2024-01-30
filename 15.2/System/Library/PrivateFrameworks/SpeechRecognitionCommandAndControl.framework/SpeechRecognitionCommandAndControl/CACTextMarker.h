@class NSData;

@interface CACTextMarker : NSObject {
    unsigned long long _index;
    NSData *_data;
}

+ (id)markerWithIndex:(unsigned long long)a0;
+ (id)markerWithData:(id)a0;
+ (BOOL)marker:(id)a0 precedesOrEqualsMarker:(id)a1 forUIElement:(id)a2;
+ (unsigned long long)lengthFromMarker:(id)a0 toMarker:(id)a1 forUIElement:(id)a2;
+ (BOOL)marker:(id)a0 precedesMarker:(id)a1 forUIElement:(id)a2;

- (void)setIndex:(unsigned long long)a0;
- (unsigned long long)index;
- (id)initWithIndex:(unsigned long long)a0;
- (void)setData:(id)a0;
- (id)initWithData:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)data;

@end
