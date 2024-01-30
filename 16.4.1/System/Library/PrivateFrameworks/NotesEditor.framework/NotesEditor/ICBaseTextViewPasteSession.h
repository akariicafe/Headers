@interface ICBaseTextViewPasteSession : NSObject

@property (nonatomic) BOOL didWarnAboutExceedingMaxLength;
@property (nonatomic) BOOL didWarnAboutAttachmentSizeExceeded;
@property (nonatomic) BOOL didWarnAboutNotSupportedForPasswordProtectedNotes;
@property (nonatomic) BOOL didWarnAboutAttachmentLimitExceeded;
@property (nonatomic) BOOL previousShouldAddMediaAsynchronously;
@property (nonatomic) unsigned long long numberOfImagesPasted;

@end
