@class NSDictionary;

@interface MetadataRange : NSObject <NSCopying>

@property (nonatomic) int type;
@property (nonatomic) int startTime;
@property (nonatomic) int duration;
@property (retain, nonatomic) NSDictionary *attributes;

+ (id)descriptionForFacePositions:(int)a0;
+ (id)descriptionForShotType:(int)a0;
+ (id)objectFromPlist:(id)a0 inProject:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)plistRepresentation;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithType:(int)a0 startTime:(int)a1 duration:(int)a2 attributes:(id)a3;

@end
