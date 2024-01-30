@class LPLinkMetadata;

@interface NELinkMetadataSource : NSObject

@property (readonly, nonatomic) LPLinkMetadata *linkMetadata;

- (void).cxx_destruct;
- (id)_linkPresentationImageFromImage:(id)a0;
- (id)initWithTitle:(id)a0 url:(id)a1 image:(id)a2;

@end
