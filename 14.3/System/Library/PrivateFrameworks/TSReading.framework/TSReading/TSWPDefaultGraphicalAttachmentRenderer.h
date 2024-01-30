@class NSString;

@interface TSWPDefaultGraphicalAttachmentRenderer : NSObject <TSWPGraphicalAttachmentRenderer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)drawAttachment:(id)a0 inContext:(struct CGContext { } *)a1 selection:(id)a2;

@end
