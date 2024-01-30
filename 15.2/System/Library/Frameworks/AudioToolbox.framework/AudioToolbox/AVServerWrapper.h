@class AVHapticServerInstance;

@interface AVServerWrapper : NSObject

@property (readonly, weak) AVHapticServerInstance *serverInstance;

- (id)initWithServerInstance:(id)a0;
- (void).cxx_destruct;
- (BOOL)contains:(id)a0;

@end
