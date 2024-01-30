@interface WFVolumeButtonManager : NSObject

@property (copy, nonatomic) id /* block */ pressHandler;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPressHandler:(id /* block */)a0;
- (void)volumeButtonPressed;

@end
