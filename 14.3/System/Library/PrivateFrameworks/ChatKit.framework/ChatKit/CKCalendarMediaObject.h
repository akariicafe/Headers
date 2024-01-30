@interface CKCalendarMediaObject : CKCardMediaObject

+ (id)fallbackFilenamePrefix;
+ (id)UTITypes;

- (int)mediaType;
- (id)subtitle;
- (BOOL)shouldBeQuickLooked;
- (id)attachmentSummary:(unsigned long long)a0;

@end
