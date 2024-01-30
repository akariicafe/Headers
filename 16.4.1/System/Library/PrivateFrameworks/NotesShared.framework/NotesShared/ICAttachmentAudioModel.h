@class NSString, NSDate;

@interface ICAttachmentAudioModel : ICAttachmentModel

@property (nonatomic) BOOL recordedInNotes;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSDate *creationDate;

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)initWithAttachment:(id)a0;
- (void)updateFileBasedAttributes;

@end
