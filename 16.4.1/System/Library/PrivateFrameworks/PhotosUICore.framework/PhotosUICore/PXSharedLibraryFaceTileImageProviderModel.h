@class UIColor, NSArray;

@interface PXSharedLibraryFaceTileImageProviderModel : PXObservable

@property (readonly, nonatomic) BOOL includeMeContact;
@property (readonly, nonatomic) double displayScale;
@property (readonly, nonatomic) BOOL isRTL;
@property (readonly, nonatomic) BOOL isAscending;
@property (readonly, nonatomic) double imageDiameter;
@property (readonly, nonatomic) double imageOffset;
@property (readonly, copy, nonatomic) UIColor *backgroundColor;
@property (readonly, copy, nonatomic) UIColor *borderColor;
@property (readonly, nonatomic) double borderWidth;
@property (readonly, copy, nonatomic) NSArray *faceTileCombinerItems;

- (void)performChanges:(id /* block */)a0;
- (void)setDisplayScale:(double)a0;
- (void)setBorderColor:(id)a0;
- (void)setBorderWidth:(double)a0;
- (void)setBackgroundColor:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setIsRTL:(BOOL)a0;
- (void)setImageOffset:(double)a0;
- (void)setIsAscending:(BOOL)a0;
- (void)setFaceTileCombinerItems:(id)a0;
- (void)setImageDiameter:(double)a0;
- (void)setIncludeMeContact:(BOOL)a0;

@end
