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

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copy;
- (unsigned long long)hash;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)strokeWidthsForFreehandDrawingToolType:(unsigned long long)a0;
- (void)p_setupDefaultValues;
- (unsigned long long)p_defaultToolType;
- (double)p_defaultStrokeWidthForToolType:(unsigned long long)a0;
- (id)p_defaultColorForToolType:(unsigned long long)a0;
- (void)p_setColor:(id)a0 forToolType:(unsigned long long)a1;
- (unsigned long long)p_indexOfDefaultStrokeWidthForFreehandDrawingToolType:(unsigned long long)a0;
- (BOOL)isEqualToFreehandDrawingToolkitUIState:(id)a0;
- (void)p_setDefaultToolType:(unsigned long long)a0;

@end
