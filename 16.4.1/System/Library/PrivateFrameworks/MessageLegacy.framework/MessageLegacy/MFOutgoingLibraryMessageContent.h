@class MFLibraryMessage;

@interface MFOutgoingLibraryMessageContent : MFOutgoingMessageContent

@property (retain, nonatomic) MFLibraryMessage *libraryMessage;

- (id)headers;
- (void)dealloc;
- (id)copy;
- (id)libraryContent;

@end
