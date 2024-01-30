@class NSString, NSArray, NSDate;

@interface PXSampleInboxModel : NSObject <PXInboxPreviewItem, PXInboxModel>

@property (class, readonly, nonatomic) NSDate *oldDate;

@property (retain, nonatomic) NSDate *creationDate;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *inboxModelTitle;
@property (nonatomic) unsigned long long assetsCount;
@property (copy, nonatomic) NSArray *senderNames;
@property (nonatomic) BOOL userIsSender;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long inboxModelType;
@property (nonatomic, getter=isSeen) BOOL seen;
@property (readonly, nonatomic) NSArray *leftPreviewItems;
@property (readonly, nonatomic) NSArray *assetsForOneUp;
@property (readonly, nonatomic) NSString *ownerFirstName;
@property (readonly, nonatomic) NSString *ownerLastName;
@property (readonly, nonatomic) NSString *ownerEmail;
@property (readonly, nonatomic) NSString *keyCommentGUID;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
