@class MFMutableMessageHeaders, NSArray, MFOutgoingMultipartRelatedContent, MFOutgoingLibraryMessageContent, MFOutgoingRichtextMessageContent;

@interface MFOutgoingMessageContent : NSObject

@property (retain, nonatomic) MFMutableMessageHeaders *headers;
@property (retain, nonatomic) NSArray *placeholders;
@property (readonly, nonatomic) MFOutgoingLibraryMessageContent *libraryContent;
@property (readonly, nonatomic) MFOutgoingRichtextMessageContent *richtextContent;
@property (readonly, nonatomic) MFOutgoingMultipartRelatedContent *multipartContent;

- (id)copy;
- (void).cxx_destruct;

@end
