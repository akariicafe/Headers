@class MFLibraryMessage;

@interface MFOutgoingLibraryMessageContent : MFOutgoingMessageContent

@property (retain, nonatomic) MFLibraryMessage *libraryMessage;

- (void).cxx_destruct;
- (id)copy;
- (id)headers;
- (id)libraryContent;

@end
