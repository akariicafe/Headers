@class NSNumber;

@interface BLTSectionInfoOverride : NSObject

@property (retain, nonatomic) NSNumber *grouping;
@property (retain, nonatomic) NSNumber *level;
@property (retain, nonatomic) NSNumber *sound;
@property (retain, nonatomic) NSNumber *criticalAlert;

- (void).cxx_destruct;
- (id)initWithOverrides:(id)a0;

@end
