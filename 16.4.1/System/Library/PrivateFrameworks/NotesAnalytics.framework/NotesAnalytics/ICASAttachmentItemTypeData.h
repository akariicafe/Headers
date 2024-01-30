@class NSString;

@interface ICASAttachmentItemTypeData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSString *attachmentID;
@property (readonly, nonatomic) NSString *attachmentUTI;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithAttachmentID:(id)a0 attachmentUTI:(id)a1;

@end
