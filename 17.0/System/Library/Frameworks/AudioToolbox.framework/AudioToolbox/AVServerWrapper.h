@class AVHapticServerInstance;

@interface AVServerWrapper : NSObject

@property (readonly, weak) AVHapticServerInstance *serverInstance;

- (BOOL)contains:(id)a0;
- (void).cxx_destruct;
- (id)initWithServerInstance:(id)a0;

@end
