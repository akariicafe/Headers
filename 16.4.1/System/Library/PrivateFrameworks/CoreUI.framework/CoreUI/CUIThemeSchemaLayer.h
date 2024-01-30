@class NSArray, NSString;

@interface CUIThemeSchemaLayer : NSObject

@property (retain, nonatomic) NSArray *renditions;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned long long index;

+ (id)layerWithRenditions:(id)a0 name:(id)a1 index:(unsigned long long)a2;

- (void)dealloc;
- (id)description;
- (void)calculateColumLefts:(id *)a0 rowTops:(id *)a1 totalSize:(struct CGSize { double x0; double x1; } *)a2 forPartFeatures:(unsigned long long)a3;
- (id)initWithRenditions:(id)a0 name:(id)a1 index:(unsigned long long)a2;
- (double)translateFromWidthsOrHeightsToLeftsOrTops:(id)a0 leftsOrTops:(id *)a1;

@end
