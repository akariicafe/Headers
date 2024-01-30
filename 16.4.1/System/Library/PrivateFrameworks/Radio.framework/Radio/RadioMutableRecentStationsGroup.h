@class NSString, NSArray;

@interface RadioMutableRecentStationsGroup : RadioRecentStationsGroup

@property (nonatomic, getter=isActive) BOOL active;
@property (copy, nonatomic) NSString *localizedTitle;
@property (copy, nonatomic) NSArray *stations;

- (void)setLocalizedTitle:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setActive:(BOOL)a0;
- (void)setStations:(id)a0;

@end
