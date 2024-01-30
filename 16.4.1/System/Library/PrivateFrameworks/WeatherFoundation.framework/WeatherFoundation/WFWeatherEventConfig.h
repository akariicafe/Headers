@interface WFWeatherEventConfig : NSObject <NSCopying>

@property (nonatomic) BOOL enabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0 defaulEnabled:(BOOL)a1;

@end
