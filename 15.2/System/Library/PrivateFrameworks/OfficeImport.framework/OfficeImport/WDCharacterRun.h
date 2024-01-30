@class NSMutableString;

@interface WDCharacterRun : WDRunWithCharacterProperties {
    NSMutableString *mString;
    BOOL mBinaryWriterContentFlag;
}

- (id)string;
- (void)setString:(id)a0;
- (id)description;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (void)appendString:(id)a0;
- (int)runType;
- (void)copyPropertiesFrom:(id)a0;
- (id)initWithParagraph:(id)a0;
- (BOOL)binaryWriterContentFlag;
- (void)setBinaryWriterContentFlag:(BOOL)a0;
- (void)removeLastCharacter:(unsigned short)a0;
- (void)setPropertiesForDocument;
- (void)clearString;
- (id)initWithParagraph:(id)a0 string:(id)a1;

@end
