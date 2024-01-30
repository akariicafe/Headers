@interface CKCalendarMediaObject : CKCardMediaObject

+ (id)UTITypes;
+ (id)fallbackFilenamePrefix;

- (int)mediaType;
- (id)attachmentSummary:(unsigned long long)a0;
- (id)subtitle;
- (BOOL)shouldBeQuickLooked;

@end
