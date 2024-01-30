@interface OBCapabilities : NSObject

@property (nonatomic) BOOL preventURLDataDetection;
@property (nonatomic) BOOL preventOpeningSafari;

+ (id)sharedCapabilities;

- (BOOL)isWAPI;

@end
