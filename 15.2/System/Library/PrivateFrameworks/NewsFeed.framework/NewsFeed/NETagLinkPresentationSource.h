@class NSString, NSURL, LPImage;

@interface NETagLinkPresentationSource : NSObject <UIActivityItemLinkPresentationSource>

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) LPImage *linkPresentationImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
