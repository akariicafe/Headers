@class NSDictionary;

@interface OADImageRecolorInfo : NSObject {
    NSDictionary *mColors;
    NSDictionary *mFills;
}

- (void).cxx_destruct;
- (id)colors;
- (id)fills;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithColors:(id)a0 fills:(id)a1;

@end
