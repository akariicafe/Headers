@class SCNAssetCatalog, NSArray, NSDictionary, NSURL, NSString;

@interface SCNKeyedUnarchiver : NSKeyedUnarchiver

@property (retain, nonatomic) NSArray *allTargetsFromAnimCodec;
@property (retain, nonatomic) NSURL *documentURL;
@property (retain, nonatomic) NSDictionary *context;
@property (retain, nonatomic) SCNAssetCatalog *assetCatalog;
@property (retain, nonatomic) NSString *lookUpKey;
@property (retain, nonatomic) id lookUpFoundInstance;
@property (readonly, nonatomic) NSURL *documentEnclosingURL;

- (void)dealloc;
- (id)initForReadingWithData:(id)a0 secure:(BOOL)a1;

@end
