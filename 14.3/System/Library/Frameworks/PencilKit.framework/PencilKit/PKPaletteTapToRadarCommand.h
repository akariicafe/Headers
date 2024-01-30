@protocol PKPaletteTapToRadarCommandDelegate;

@interface PKPaletteTapToRadarCommand : NSObject

@property (weak, nonatomic) id<PKPaletteTapToRadarCommandDelegate> delegate;

- (void).cxx_destruct;
- (void)execute;

@end
