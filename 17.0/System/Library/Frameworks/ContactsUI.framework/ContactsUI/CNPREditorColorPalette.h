@class PREditorColorPalette;

@interface CNPREditorColorPalette : NSObject {
    PREditorColorPalette *_wrappedEditorColorPalette;
}

+ (id)standardPalette;

- (id)colors;
- (void).cxx_destruct;
- (id)initWithEditorColorPalette:(id)a0;

@end
