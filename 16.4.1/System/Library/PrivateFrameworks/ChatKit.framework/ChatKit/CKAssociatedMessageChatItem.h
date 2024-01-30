@class NSString, NSDate;

@interface CKAssociatedMessageChatItem : CKChatItem

@property (copy, nonatomic) NSString *timestampString;
@property (readonly, nonatomic) NSString *guid;
@property (readonly, nonatomic) NSString *associatedChatItemGUID;
@property (readonly, nonatomic) BOOL isFromMe;
@property (readonly, nonatomic) BOOL parentMessageIsFromMe;
@property (readonly, nonatomic) BOOL failed;
@property (readonly, nonatomic) struct IMAssociatedMessageGeometryDescriptor { unsigned long long x0; unsigned long long x1; float x2; float x3; float x4; float x5; float x6; } geometryDescriptor;
@property (readonly, nonatomic) NSDate *time;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } associatedMessageRange;

- (id)sender;
- (void).cxx_destruct;
- (id)IMAssociatedMessageChatItem;
- (id)layoutItemSpacingWithEnvironment:(id)a0 datasourceItemIndex:(long long)a1 allDatasourceItems:(id)a2 supplementryItems:(id)a3;
- (id)loadTimestampString;
- (id)loadTranscriptDrawerText;
- (char)transcriptOrientation;
- (BOOL)wantsDrawerLayout;

@end
