@interface RemindersUICore.TTRReminderTextStorage : TTRReminderBaseTextStorage {
    void /* unknown type, empty encoding */ baseTextStyles;
    void /* unknown type, empty encoding */ uncommittedHashtagTextStyles;
    void /* unknown type, empty encoding */ committedHashtagTextStyles;
    void /* unknown type, empty encoding */ foreignHashtagTextStyles;
    void /* unknown type, empty encoding */ harvestedResultTextStyles;
    void /* unknown type, empty encoding */ hashtagVisibility;
    void /* unknown type, empty encoding */ debug_nonEditableTextStyles;
    void /* unknown type, empty encoding */ debug_highlightNonEditableTexts;
}

- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)processEditing;
- (id)initWithItemProviderData:(id)a0 typeIdentifier:(id)a1 error:(id *)a2;

@end
