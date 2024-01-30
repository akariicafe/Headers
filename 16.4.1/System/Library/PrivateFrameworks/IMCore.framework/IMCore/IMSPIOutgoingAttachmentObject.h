@class NSString;

@interface IMSPIOutgoingAttachmentObject : NSObject

@property (retain) NSString *fileURL;
@property BOOL isSensitive;

- (void).cxx_destruct;
- (id)initWithFileURL:(id)a0 isSensitive:(BOOL)a1;

@end
