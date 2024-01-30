@class NSMapTable, CRTTCompatibleDocument, ICTable, ICAttachment;
@protocol ICTableAttachmentProviderDelegate;

@interface ICTableAttachmentProvider : NSObject

@property (class, readonly) NSMapTable *providerMapping;
@property (class, readonly) NSMapTable *mergeNotificationRegister;

@property (retain, nonatomic) ICAttachment *backgroundAttachment;
@property (readonly, nonatomic) CRTTCompatibleDocument *tableDoc;
@property (weak, nonatomic) id<ICTableAttachmentProviderDelegate> delegate;
@property (weak, nonatomic) ICAttachment *attachment;
@property (readonly, nonatomic) ICTable *table;
@property (nonatomic) BOOL isBeingEditedLocallyOnDevice;
@property (nonatomic) BOOL needsToUpdateTableFromBackgroundAttachment;

+ (id)sharedProviderForAttachment:(id)a0;
+ (id)backgroundManagedObjectContext;
+ (void)notifyProviderForRefreshToAttachment:(id)a0;
+ (void)saveAttachmentOnMainThread:(id)a0;

- (void).cxx_destruct;
- (void)didRefreshBackgroundTableAttachment:(id)a0;
- (void)notifyDelegateTableAttachmentDidMerge;
- (void)notifyDelegateTableAttachmentWillMerge;
- (void)setTableFromDocument:(id)a0;
- (void)updateTableFromMOC;

@end
