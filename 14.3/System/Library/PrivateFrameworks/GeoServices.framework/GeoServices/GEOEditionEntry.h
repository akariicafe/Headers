@interface GEOEditionEntry : NSObject

@property (nonatomic) unsigned int tileset;
@property (nonatomic) unsigned int edition;
@property (nonatomic) unsigned int provider;
@property (nonatomic) BOOL invalidateOnly;

@end
