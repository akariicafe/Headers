@interface PaperKit.AssetInfo : NSObject {
    void /* unknown type, empty encoding */ digest;
    void /* unknown type, empty encoding */ maxDimensionInPixels;
    void /* unknown type, empty encoding */ actualMaxDimensionInPixels;
}

@property (nonatomic, readonly) long long hash;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
