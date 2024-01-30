@class NSMutableArray;

@interface SMSPart : NSObject

@property (readonly, retain, nonatomic) NSMutableArray *textParts;
@property (readonly, retain, nonatomic) NSMutableArray *attachmentParts;

- (void)dealloc;
- (void)addAttachmentPart:(id)a0;
- (void)addTextPart:(id)a0;

@end
