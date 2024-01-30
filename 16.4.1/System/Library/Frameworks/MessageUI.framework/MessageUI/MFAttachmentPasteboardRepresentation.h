@class NSData, NSString;

@interface MFAttachmentPasteboardRepresentation : NSObject <NSSecureCoding, MFAttachmentPasteboardRepresentation>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *mimeType;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithAttachment:(id)a0;
- (id)initWithMFAttachment:(id)a0;

@end
