@class NSDictionary, NSString;

@interface SSVStoreDownload : NSObject

@property (readonly, nonatomic) NSDictionary *properties;
@property (copy, nonatomic) NSString *preferredAssetFlavor;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
