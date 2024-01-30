@class AVHapticServerInstance;

@interface AVServerWrapper : NSObject

@property (readonly, weak) AVHapticServerInstance *serverInstance;

- (void).cxx_destruct;
- (id)initWithServerInstance:(id)a0;
- (BOOL)contains:(id)a0;

@end
