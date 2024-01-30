@class ICAttachment;

@interface ICMultipeerAttachmentRequest : ICMultipeerResourceRequest

@property (retain) ICAttachment *attachment;

- (void)startRequest;
- (id)note;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
