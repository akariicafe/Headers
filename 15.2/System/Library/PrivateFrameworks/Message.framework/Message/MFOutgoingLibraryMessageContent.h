@class MFLibraryMessage;

@interface MFOutgoingLibraryMessageContent : MFOutgoingMessageContent

@property (retain, nonatomic) MFLibraryMessage *libraryMessage;

- (id)headers;
- (void).cxx_destruct;
- (id)copy;
- (id)libraryContent;

@end
