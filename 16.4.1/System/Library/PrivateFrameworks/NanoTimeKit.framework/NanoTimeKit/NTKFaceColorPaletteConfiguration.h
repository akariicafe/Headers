@class NSString, NTKPigmentEditOption;
@protocol NTKFaceColorPaletteConfigurationDelegate;

@interface NTKFaceColorPaletteConfiguration : NSObject <NSCopying> {
    NSString *_formattedCollectionName;
    NSString *_uniqueId;
}

@property (weak, nonatomic) id<NTKFaceColorPaletteConfigurationDelegate> delegate;
@property (retain, nonatomic) NTKPigmentEditOption *pigmentEditOption;
@property (retain, nonatomic) NSString *colorOption;
@property (retain, nonatomic) NSString *collectionName;
@property (readonly, nonatomic) NSString *formattedCollectionName;
@property (nonatomic) double colorFraction;

- (id)uniqueId;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)handleContentChanged;
- (id)initWithColorOption:(id)a0 collectionName:(id)a1;
- (id)initWithColorOption:(id)a0 collectionName:(id)a1 colorFraction:(double)a2;
- (id)initWithPigmentEditOption:(id)a0;
- (void)setColorName:(id)a0 collectionName:(id)a1 colorFraction:(double)a2;

@end
