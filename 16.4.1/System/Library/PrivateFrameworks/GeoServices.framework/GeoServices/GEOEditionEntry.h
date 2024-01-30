@interface GEOEditionEntry : NSObject

@property (nonatomic) union { unsigned int value; struct { unsigned char type : 8; union { struct { unsigned short style : 14; unsigned char size : 4; unsigned char scale : 4; unsigned char padding : 2; } standard; struct { unsigned char style : 8; unsigned short region : 16; } flyoverRegion; } ; } structured; } tileset;
@property (nonatomic) unsigned int edition;
@property (nonatomic) unsigned int provider;
@property (nonatomic) BOOL invalidateOnly;

@end
