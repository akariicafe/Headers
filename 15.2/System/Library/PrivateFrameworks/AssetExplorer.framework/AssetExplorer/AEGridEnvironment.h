@interface AEGridEnvironment : NSObject

@property (nonatomic) double headerHeight;
@property (nonatomic) double targetBottomMargin;
@property (nonatomic) double minimumTileHeight;
@property (nonatomic) double scale;
@property (nonatomic) double compactExtensionHeight;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (unsigned long long)hash;

@end
