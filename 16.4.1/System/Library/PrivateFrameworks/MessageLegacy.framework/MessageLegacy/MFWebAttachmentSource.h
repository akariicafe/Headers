@class MFLock, NSMutableDictionary;

@interface MFWebAttachmentSource : NSObject {
    MFLock *_attachmentsLock;
    NSMutableDictionary *_attachmentsByURL;
}

+ (id)_setOfAllSources;
+ (id)allSources;

- (void)dealloc;
- (id)init;
- (id)description;
- (id)attachmentForURL:(id)a0;
- (void)removeAttachmentForURL:(id)a0;
- (BOOL)setAttachment:(id)a0 forURL:(id)a1;

@end
