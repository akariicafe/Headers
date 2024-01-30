@class NSArray, MFPlainTextDocument;

@interface MFOutgoingRichtextMessageContent : MFOutgoingMessageContent

@property (nonatomic) BOOL textPartsAreHTML;
@property (retain, nonatomic) MFPlainTextDocument *plaintextAlternative;
@property (retain, nonatomic) NSArray *mixedContent;

- (void).cxx_destruct;
- (id)copy;
- (id)richtextContent;

@end
