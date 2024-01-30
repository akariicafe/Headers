@class MFLibraryMessage;

@interface MFOutgoingLibraryMessageContent : MFOutgoingMessageContent

@property (retain, nonatomic) MFLibraryMessage *libraryMessage;

- (id)headers;
- (id)copy;
- (void)dealloc;
- (id)libraryContent;

@end
