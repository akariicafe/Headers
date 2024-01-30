@class PDNotesMaster;

@interface PDNotesSlide : PDSlideChild {
    PDNotesMaster *mNotesMaster;
}

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)doneWithContent;
- (id)parentSlideBase;
- (void)setNotesMaster:(id)a0;
- (id)parentTextBodyPropertiesForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 overrideIndex:(BOOL)a2;
- (id)parentTextStyleForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 defaultTextListStyle:(id)a2 overrideIndex:(BOOL)a3;
- (id)parentShapePropertiesForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 overrideIndex:(BOOL)a2;
- (id)masterGraphicForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 overrideIndex:(BOOL)a2;
- (id)notesMaster;
- (id)masterPlaceholderOfType:(int)a0;

@end
