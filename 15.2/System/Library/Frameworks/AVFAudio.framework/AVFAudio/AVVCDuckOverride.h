@class NSNumber;

@interface AVVCDuckOverride : NSObject

@property (retain, nonatomic) NSNumber *duckOthers;
@property (retain, nonatomic) NSNumber *duckToLevel;
@property (retain, nonatomic) NSNumber *mixWithOthers;

- (id)description;
- (void)dealloc;
- (id)initWithDuckOthers:(id)a0 duckToLevel:(id)a1 mixWithOthers:(id)a2;

@end
