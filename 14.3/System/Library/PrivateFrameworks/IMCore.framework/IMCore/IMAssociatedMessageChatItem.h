@class IMHandle, NSString, NSDictionary, NSDate;

@interface IMAssociatedMessageChatItem : IMTranscriptChatItem {
    BOOL _parentMessageIsFromMe;
}

@property (readonly, nonatomic) BOOL isFromMe;
@property (readonly, nonatomic) BOOL parentMessageIsFromMe;
@property (readonly, nonatomic) BOOL failed;
@property (readonly, nonatomic) NSString *associatedMessageGUID;
@property (readonly, nonatomic) long long associatedMessageType;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } associatedMessageRange;
@property (readonly, nonatomic) struct IMAssociatedMessageGeometryDescriptor { unsigned long long layoutIntent; unsigned long long associatedLayoutIntent; float parentPreviewWidth; float xScalar; float yScalar; float scale; float rotation; } geometryDescriptor;
@property (readonly, nonatomic) NSDate *time;
@property (readonly, nonatomic) IMHandle *sender;
@property (readonly, nonatomic) NSDictionary *messageSummaryInfo;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)message;
- (void)_setParentMessageIsFromMe:(BOOL)a0;
- (id)_initWithItem:(id)a0 sender:(id)a1;
- (id)_imAssociatedMessageItem;

@end
