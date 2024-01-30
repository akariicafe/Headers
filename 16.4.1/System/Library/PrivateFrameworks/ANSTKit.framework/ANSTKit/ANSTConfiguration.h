@interface ANSTConfiguration : NSObject

@property (nonatomic) long long networkEngineType;
@property (nonatomic) unsigned int qualityOfService;

+ (id)new;

- (id)_init;
- (id)init;

@end
