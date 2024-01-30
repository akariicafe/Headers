@class NSSet, NSDictionary;

@interface VUIMediaCategory : NSObject

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSSet *supportedMediaCollectionTypes;
@property (copy, nonatomic) NSDictionary *supportedChildMediaCollectionTypes;

+ (id)mediaCatgeoryForType:(unsigned long long)a0;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)_initWithType:(unsigned long long)a0;

@end
