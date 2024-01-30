@class NSData, NSArray, SCRO2DBrailleCanvasDescriptor;

@interface SCRO2DBrailleCanvas : NSObject {
    NSArray *_pins;
    NSData *_imageData;
    NSData *_brailleTextData;
    unsigned long long _numberOfTextLines;
}

@property (readonly) SCRO2DBrailleCanvasDescriptor *descriptor;
@property (retain, nonatomic) NSData *imageData;

- (unsigned long long)height;
- (unsigned long long)cellWidth;
- (unsigned long long)cellHeight;
- (unsigned long long)width;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)_numberOfTextLines;
- (void)setNumberOfTextLines:(long long)a0;
- (BOOL)hasConsistentHorizontalPinSpacing;
- (BOOL)hasConsistentVerticalPinSpacing;
- (double)verticalPinSpacing;
- (double)horizontalPinSpacing;
- (double)interCellHorizontalSpacing;
- (double)interCellVerticalSpacing;
- (void)_updateCells;
- (BOOL)skipPinBetweenCellsHorizontally;
- (BOOL)skipPinBetweenCellsVertically;
- (unsigned long long)pinHeightStyle;
- (unsigned long long)detentCount;
- (union { unsigned long long x0; float x1; })_fullyDownPinState;
- (id)_pinForX:(unsigned long long)a0 y:(unsigned long long)a1;
- (void)_blitText;
- (void)_clearCells;
- (void)_blitBMP;
- (void)_updateTextCells;
- (void)setPinState:(union { unsigned long long x0; float x1; })a0 forX:(unsigned long long)a1 y:(unsigned long long)a2;
- (BOOL)_canBlitCellAtX:(unsigned long long)a0 y:(unsigned long long)a1;
- (void)_blitCell:(unsigned char)a0 AtX:(unsigned long long)a1 y:(unsigned long long)a2;
- (union { unsigned long long x0; float x1; })_fullyUpPinState;
- (id)initWithCanvasDescriptor:(id)a0;
- (BOOL)supportsBrailleText;
- (union { unsigned long long x0; float x1; })pinStateForX:(unsigned long long)a0 y:(unsigned long long)a1;
- (unsigned long long)_textDisplayHeight;
- (void)setBrailleText:(const char *)a0 length:(unsigned long long)a1;
- (id)debugAsciiCanvas;

@end
