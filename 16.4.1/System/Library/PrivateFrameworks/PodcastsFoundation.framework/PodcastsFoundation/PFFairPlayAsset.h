@class NSString;

@interface PFFairPlayAsset : NSObject {
    void /* unknown type, empty encoding */ adamID;
    void /* unknown type, empty encoding */ avAsset;
    void /* unknown type, empty encoding */ useCase;
}

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAdamID:(long long)a0 avAsset:(id)a1 useCase:(long long)a2;

@end
