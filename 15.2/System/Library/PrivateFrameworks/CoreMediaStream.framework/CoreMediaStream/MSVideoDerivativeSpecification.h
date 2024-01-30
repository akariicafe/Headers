@class NSString;

@interface MSVideoDerivativeSpecification : NSObject

@property (readonly, nonatomic) BOOL useCellular;
@property (readonly, nonatomic) BOOL powerRequired;
@property (readonly, nonatomic) double bitRate;
@property (readonly, nonatomic) NSString *videoType;
@property (readonly, nonatomic) unsigned long long mediaAssetType;

+ (id)videoDerivativeSpecificationsWithDictionaryArray:(id)a0;

- (id)initWithDictionary:(id)a0;

@end
