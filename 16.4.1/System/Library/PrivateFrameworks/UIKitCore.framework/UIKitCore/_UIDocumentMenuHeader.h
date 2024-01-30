@class NSURL;

@interface _UIDocumentMenuHeader : UIDocumentProperties

@property (readonly, nonatomic) NSURL *url;
@property (copy, nonatomic) id /* block */ dragItemProvider;

@end
