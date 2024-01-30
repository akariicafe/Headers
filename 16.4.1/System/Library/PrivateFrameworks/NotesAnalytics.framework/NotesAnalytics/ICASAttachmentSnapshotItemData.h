@class NSString;

@interface ICASAttachmentSnapshotItemData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSString *attachmentID;
@property (readonly, nonatomic) NSString *attachmentTypeUTI;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithAttachmentID:(id)a0 attachmentTypeUTI:(id)a1;

@end
