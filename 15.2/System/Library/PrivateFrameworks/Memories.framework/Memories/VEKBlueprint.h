@class NSString, VEKSong, MiroBlueprint;

@interface VEKBlueprint : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *fontName;
@property (readonly, nonatomic) long long mood;
@property (copy, nonatomic) VEKSong *song;
@property (nonatomic) long long titleStyle;
@property (nonatomic) long long editStyle;
@property (retain, nonatomic) MiroBlueprint *data;

+ (void)initialize;
+ (id)moodIDForVEKMood:(long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)moodIDmap;
- (id)initWithMood:(long long)a0;
- (double)idealDurationForAsset:(id)a0;
- (long long)moodForMoodID:(id)a0;
- (id)moodIDForMood:(long long)a0;

@end
