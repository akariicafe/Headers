@class PDNotesMaster;

@interface PDNotesSlide : PDSlideChild {
    PDNotesMaster *mNotesMaster;
}

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)parentSlideBase;
- (void)setNotesMaster:(id)a0;
- (void)doneWithContent;
- (id)masterGraphicForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 overrideIndex:(BOOL)a2;
- (id)masterPlaceholderOfType:(int)a0;
- (id)notesMaster;
- (id)parentShapePropertiesForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 overrideIndex:(BOOL)a2;
- (id)parentTextBodyPropertiesForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 overrideIndex:(BOOL)a2;
- (id)parentTextStyleForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 defaultTextListStyle:(id)a2 overrideIndex:(BOOL)a3;

@end
