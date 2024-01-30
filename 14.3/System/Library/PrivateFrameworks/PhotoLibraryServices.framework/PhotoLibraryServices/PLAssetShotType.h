@class NSArray, NSString;

@interface PLAssetShotType : NSObject

@property (nonatomic) long long type;
@property (nonatomic) long long captureFlags;
@property (nonatomic) long long procFlags;
@property (retain, nonatomic) NSArray *devices;
@property (copy, nonatomic) NSString *name;

+ (id)allShotTypes;

- (id)initWithType:(long long)a0 captureFlags:(long long)a1 procFlags:(long long)a2 devices:(id)a3 name:(id)a4;
- (void).cxx_destruct;

@end
