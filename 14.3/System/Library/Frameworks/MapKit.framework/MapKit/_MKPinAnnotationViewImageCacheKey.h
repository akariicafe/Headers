@class UIColor;

@interface _MKPinAnnotationViewImageCacheKey : NSObject {
    unsigned long long _mapType;
    UIColor *_pinColor;
    long long _idiom;
    long long _userInterfaceStyle;
}

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithMapType:(unsigned long long)a0 pinColor:(id)a1 traits:(id)a2;

@end
