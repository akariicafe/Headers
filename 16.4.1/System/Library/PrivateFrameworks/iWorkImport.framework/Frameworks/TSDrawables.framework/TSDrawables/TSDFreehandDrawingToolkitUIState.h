@class TSUColor;

@interface TSDFreehandDrawingToolkitUIState : TSPObject {
    unsigned long long _mostRecentToolTypeToRestore;
    TSUColor *_penToolColor;
    double _penToolOpacity;
    double _penToolUnscaledWidth;
    TSUColor *_pencilToolColor;
    double _pencilToolOpacity;
    double _pencilToolUnscaledWidth;
    TSUColor *_crayonToolColor;
    double _crayonToolOpacity;
    double _crayonToolUnscaledWidth;
    TSUColor *_fillToolColor;
    double _fillToolOpacity;
    double _eraserToolScaledWidth;
    BOOL _eraserToolErasesWholeObjects;
}

@property (nonatomic) unsigned long long currentToolType;
@property (readonly, nonatomic) unsigned long long mostRecentRestorableToolType;

- (BOOL)isEqual:(id)a0;
- (id)initWithContext:(id)a0;
- (unsigned long long)hash;
- (id)copy;
- (void).cxx_destruct;
- (void)saveToArchiver:(id)a0;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)strokeWidthsForFreehandDrawingToolType:(unsigned long long)a0;
- (unsigned long long)p_defaultToolType;
- (void)p_setColor:(id)a0 forToolType:(unsigned long long)a1;
- (void)p_setDefaultToolType:(unsigned long long)a0;
- (void)p_setupDefaultValues;
- (BOOL)isEqualToFreehandDrawingToolkitUIState:(id)a0;
- (id)p_defaultColorForToolType:(unsigned long long)a0;
- (double)p_defaultStrokeWidthForToolType:(unsigned long long)a0;
- (unsigned long long)p_indexOfDefaultStrokeWidthForFreehandDrawingToolType:(unsigned long long)a0;

@end
