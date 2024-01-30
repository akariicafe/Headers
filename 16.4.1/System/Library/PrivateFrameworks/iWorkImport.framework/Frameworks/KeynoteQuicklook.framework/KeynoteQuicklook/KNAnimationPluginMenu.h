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

+ (id)animationPluginMenu;
+ (id)localizedStringForDirection:(unsigned long long)a0 shortVersion:(BOOL)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)copyToInstance:(id)a0;
- (void)addDirection:(unsigned long long)a0 localizedMenuString:(id)a1;
- (void)addDirection:(unsigned long long)a0 useShortString:(BOOL)a1;
- (BOOL)containsDirection:(unsigned long long)a0;
- (unsigned long long)directionForIndex:(unsigned long long)a0;
- (unsigned long long)indexForDirection:(unsigned long long)a0;
- (id)localizedStringForDirection:(unsigned long long)a0;

@end
