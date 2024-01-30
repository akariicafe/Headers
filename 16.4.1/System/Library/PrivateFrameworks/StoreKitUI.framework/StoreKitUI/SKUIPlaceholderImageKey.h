@class IKColor;

@interface SKUIPlaceholderImageKey : NSObject {
    long long _height;
    long long _imageTreatment;
    long long _width;
    IKColor *_placeholderBackgroundColor;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 imageTreatment:(long long)a1 placeholderBackgroundColor:(id)a2;

@end
