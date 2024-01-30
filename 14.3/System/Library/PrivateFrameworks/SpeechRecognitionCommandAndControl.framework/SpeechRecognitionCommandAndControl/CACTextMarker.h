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
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)index;
- (id)data;
- (id)initWithData:(id)a0;
- (id)initWithIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (id)description;
- (void)setData:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
