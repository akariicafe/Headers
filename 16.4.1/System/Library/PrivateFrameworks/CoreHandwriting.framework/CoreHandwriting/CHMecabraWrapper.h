@interface CHMecabraWrapper : NSObject

@property (readonly) struct __Mecabra { } *mecabra;

- (void)dealloc;
- (id)init;
- (void)initMecabraIfNeededWithType:(int)a0 learningDictURL:(id)a1;

@end
