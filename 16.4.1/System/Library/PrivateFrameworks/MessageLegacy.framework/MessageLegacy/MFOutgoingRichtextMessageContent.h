@class NSArray, MFPlainTextDocument;

@interface MFOutgoingRichtextMessageContent : MFOutgoingMessageContent

@property (nonatomic) BOOL textPartsAreHTML;
@property (retain, nonatomic) MFPlainTextDocument *plaintextAlternative;
@property (retain, nonatomic) NSArray *mixedContent;

- (void)dealloc;
- (id)copy;
- (id)richtextContent;

@end
