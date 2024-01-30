@class NSArray, AVTEditingModelColors;

@interface AVTCoreModel : NSObject

@property (readonly, copy, nonatomic) NSArray *groups;
@property (readonly, copy, nonatomic) AVTEditingModelColors *colors;
@property (readonly, nonatomic) unsigned long long platform;

- (void).cxx_destruct;
- (id)initWithGroups:(id)a0 colors:(id)a1 forPlatform:(unsigned long long)a2;
- (id)description;

@end
