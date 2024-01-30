@class NSString;

@interface WLKVideoAsset : NSObject

@property (readonly, copy, nonatomic) NSString *URL;
@property (readonly, copy, nonatomic) NSString *programID;
@property (readonly, copy, nonatomic) NSString *assetID;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
