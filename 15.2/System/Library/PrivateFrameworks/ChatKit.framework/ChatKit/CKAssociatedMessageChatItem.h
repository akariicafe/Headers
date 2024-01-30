@class NSString, IMHandle, NSDate;

@interface CKAssociatedMessageChatItem : CKChatItem

@property (copy, nonatomic) NSString *timestampString;
@property (readonly, nonatomic) NSString *guid;
@property (readonly, nonatomic) NSString *associatedChatItemGUID;
@property (readonly, nonatomic) BOOL isFromMe;
@property (readonly, nonatomic) BOOL parentMessageIsFromMe;
@property (readonly, nonatomic) BOOL failed;
@property (readonly, nonatomic) struct IMAssociatedMessageGeometryDescriptor { unsigned long long x0; unsigned long long x1; float x2; float x3; float x4; float x5; float x6; } geometryDescriptor;
@property (readonly, nonatomic) NSDate *time;
@property (readonly, nonatomic) IMHandle *sender;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } associatedMessageRange;

- (id)IMAssociatedMessageChatItem;
- (id)loadTranscriptDrawerText;
- (void).cxx_destruct;
- (char)transcriptOrientation;
- (BOOL)wantsDrawerLayout;
- (id)layoutItemSpacingWithEnvironment:(id)a0 datasourceItemIndex:(long long)a1 allDatasourceItems:(id)a2 supplementryItems:(id)a3;
- (id)loadTimestampString;

@end
