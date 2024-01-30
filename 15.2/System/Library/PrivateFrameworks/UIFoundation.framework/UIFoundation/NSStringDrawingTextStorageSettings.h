@interface NSStringDrawingTextStorageSettings : NSObject {
    struct { float _hyphenationFactor; struct { unsigned char usesFontLeading : 1; unsigned char usesScreenFonts : 1; unsigned char showsInvisibleCharacters : 1; unsigned char showsControlCharacters : 1; unsigned char defaultAttachmentScaling : 4; unsigned char typesetterBehavior : 8; unsigned int reserved : 20; } _flags; } _settings;
}

- (id)init;

@end
