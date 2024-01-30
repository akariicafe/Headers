@class NSDictionary;

@interface BRAsset : NSObject

@property (readonly, nonatomic) long long type;
@property (nonatomic) BOOL hasAudio;
@property (nonatomic) BOOL hasHaptic;
@property (readonly, nonatomic) NSDictionary *parameters;
@property (readonly, nonatomic) BOOL isNull;
@property (readonly, nonatomic) id propertyList;

+ (id)nullAsset;
+ (id)withType:(long long)a0 andParameters:(id)a1;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)dealloc;
- (id)initWithType:(long long)a0 andParameters:(id)a1 null:(BOOL)a2;

@end
