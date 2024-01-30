@class NSString;

@interface PHAJobWorkInfo : NSObject

@property (readonly, copy, nonatomic) NSString *assetLocalIdentifier;
@property (nonatomic) int workerFlags;

- (void).cxx_destruct;
- (id)initWithAssetLocalIdentifier:(id)a0 workerFlags:(int)a1;

@end
