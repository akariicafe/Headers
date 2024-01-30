@interface PSBrightnessController : NSObject

@property (copy, nonatomic) id /* block */ isTracking;
@property (copy, nonatomic) id /* block */ brightnessChangedExternally;

+ (id)sharedController;

- (void).cxx_destruct;

@end
