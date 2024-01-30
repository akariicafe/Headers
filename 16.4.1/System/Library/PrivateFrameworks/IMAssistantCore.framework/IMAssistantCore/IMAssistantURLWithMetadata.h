@class NSURL, LPLinkMetadata;

@interface IMAssistantURLWithMetadata : NSObject

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) LPLinkMetadata *metadata;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0 metadata:(id)a1;

@end
