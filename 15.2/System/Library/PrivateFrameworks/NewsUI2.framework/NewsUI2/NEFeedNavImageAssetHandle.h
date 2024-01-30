@interface NEFeedNavImageAssetHandle : NSObject {
    void /* unknown type, empty encoding */ filePath;
    void /* unknown type, empty encoding */ fallbackImage;
    void /* unknown type, empty encoding */ uniqueKey;
    void /* unknown type, empty encoding */ feedNavImageSize;
    void /* unknown type, empty encoding */ tag;
    void /* unknown type, empty encoding */ feedNavImageStyler;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithIdentifier:(id)a0 feedNavImage:(id)a1 feedNavImageSize:(struct CGSize { double x0; double x1; })a2 feedNavImageStyler:(id)a3;
- (id)initWithTag:(id)a0 feedNavImageSize:(struct CGSize { double x0; double x1; })a1 feedNavImageStyler:(id)a2;

@end
