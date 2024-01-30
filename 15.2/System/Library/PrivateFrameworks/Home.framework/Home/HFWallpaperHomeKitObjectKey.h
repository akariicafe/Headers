@class NSUUID;

@interface HFWallpaperHomeKitObjectKey : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;

+ (id)stringFromHomeKitObjectType:(unsigned long long)a0;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithHomeKitObject:(id)a0;
- (id)initWithType:(unsigned long long)a0 uniqueIdentifier:(id)a1;

@end
