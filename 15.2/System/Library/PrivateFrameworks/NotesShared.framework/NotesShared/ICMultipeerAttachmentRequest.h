@class ICAttachment;

@interface ICMultipeerAttachmentRequest : ICMultipeerResourceRequest

@property (retain) ICAttachment *attachment;

- (id)description;
- (void)startRequest;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)note;
- (unsigned long long)hash;

@end
