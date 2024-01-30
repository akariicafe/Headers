@class NSArray, NSMutableDictionary, NSMutableArray;

@interface KNAnimationPluginMenu : NSObject <NSSecureCoding> {
    NSMutableDictionary *_localizedStringToDirectionMap;
    NSMutableDictionary *_directionToLocalizedStringMap;
    NSMutableArray *_localizedDirections;
    NSMutableArray *_directions;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSArray *localizedDirections;
@property (readonly, nonatomic) NSArray *directions;
@property (nonatomic) unsigned long long defaultDirection;

+ (id)localizedStringForDirection:(unsigned long long)a0 shortVersion:(BOOL)a1;
+ (id)animationPluginMenu;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)containsDirection:(unsigned long long)a0;
- (void)addDirection:(unsigned long long)a0 localizedMenuString:(id)a1;
- (id)localizedStringForDirection:(unsigned long long)a0;
- (void)addDirection:(unsigned long long)a0 useShortString:(BOOL)a1;
- (unsigned long long)indexForDirection:(unsigned long long)a0;
- (unsigned long long)directionForIndex:(unsigned long long)a0;
- (void)copyToInstance:(id)a0;

@end
