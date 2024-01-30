@class NSMutableArray;

@interface MFPalette : NSObject <MFObject> {
    NSMutableArray *m_colours;
}

+ (id)paletteWithColours:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (BOOL)resize:(int)a0;
- (int)selectInto:(id)a0;
- (id)initWithColours:(id)a0;
- (BOOL)setEntries:(int)a0 in_colours:(id)a1;
- (id)getColour:(int)a0;

@end
