@class MFLock, NSMutableDictionary;

@interface MFWebAttachmentSource : NSObject {
    MFLock *_attachmentsLock;
    NSMutableDictionary *_attachmentsByURL;
}

+ (id)_setOfAllSources;
+ (id)allSources;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)removeAttachmentForURL:(id)a0;
- (id)attachmentForURL:(id)a0;
- (BOOL)setAttachment:(id)a0 forURL:(id)a1;

@end
