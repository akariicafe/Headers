@class NSString, NSDictionary, NSDate;

@interface CLSMessageAttachment : NSObject

@property (readonly, nonatomic) NSDate *createdDate;
@property (readonly, nonatomic) long long createdDateValue;
@property (readonly, nonatomic) long long startDateValue;
@property (readonly, nonatomic) long long transferState;
@property (readonly, nonatomic) long long totalBytes;
@property (readonly, nonatomic) BOOL isOutgoing;
@property (readonly, nonatomic) BOOL isSticker;
@property (readonly, nonatomic) BOOL hideAttachment;
@property (readonly, nonatomic) NSString *guid;
@property (readonly, nonatomic) NSString *transferName;
@property (readonly, nonatomic) NSString *filename;
@property (readonly, nonatomic) NSString *utiType;
@property (readonly, nonatomic) NSString *mimeType;
@property (readonly, nonatomic) NSString *originalGUID;
@property (readonly, nonatomic) NSDictionary *userInfo;
@property (readonly, nonatomic) NSDictionary *stickerUserInfo;
@property (readonly, nonatomic) NSDictionary *attributionInfo;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithAttachmentRecord:(struct _IMDAttachmentRecordStruct { } *)a0;

@end
