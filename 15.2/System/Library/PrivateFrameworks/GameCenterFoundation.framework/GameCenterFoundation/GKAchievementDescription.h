@class UIImage, GKAchievementInternal, NSString;

@interface GKAchievementDescription : NSObject <NSCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) UIImage *image;
@property (retain) GKAchievementInternal *internal;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, retain, nonatomic) NSString *groupIdentifier;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *achievedDescription;
@property (readonly, copy, nonatomic) NSString *unachievedDescription;
@property (readonly, nonatomic) long long maximumPoints;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, nonatomic, getter=isReplayable) BOOL replayable;

+ (id)instanceMethodSignatureForSelector:(SEL)a0;
+ (BOOL)instancesRespondToSelector:(SEL)a0;
+ (void)loadAchievementDescriptionsForGame:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (id)_achievementDescriptionFromGame:(id)a0 propertyListDictionary:(id)a1;
+ (id)_loadLocalAchievementDescriptionsForGame:(id)a0;
+ (void)loadAchievementDescriptionsWithCompletionHandler:(id /* block */)a0;

- (id)valueForUndefinedKey:(id)a0;
- (id)game;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithInternalRepresentation:(id)a0;
- (unsigned long long)hash;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)imageNameForIcon;

@end
