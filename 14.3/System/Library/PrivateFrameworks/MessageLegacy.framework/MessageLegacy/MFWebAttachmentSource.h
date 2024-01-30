@class MFLock, NSMutableDictionary;

@interface MFWebAttachmentSource : NSObject {
    MFLock *_attachmentsLock;
    NSMutableDictionary *_attachmentsByURL;
}

+ (id)allSources;
+ (id)_setOfAllSources;

- (id)init;
- (void)dealloc;
- (void)removeAttachmentForURL:(id)a0;
- (id)description;
- (id)attachmentForURL:(id)a0;
- (BOOL)setAttachment:(id)a0 forURL:(id)a1;

@end
