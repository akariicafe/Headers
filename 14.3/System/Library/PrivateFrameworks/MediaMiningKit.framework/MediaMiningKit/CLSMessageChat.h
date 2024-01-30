@class NSArray, NSData, NSString;

@interface CLSMessageChat : NSObject

@property (readonly, nonatomic) NSArray *persons;
@property (readonly, nonatomic) NSArray *recipientHandles;
@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) long long isArchived;
@property (readonly, nonatomic) long long isFiltered;
@property (readonly, nonatomic) long long hasHadSuccessfulQuery;
@property (readonly, nonatomic) long long lastReadMessageTimeStamp;
@property (readonly, nonatomic) NSData *properties;
@property (readonly, nonatomic) NSString *accountID;
@property (readonly, nonatomic) NSString *chatIdentifier;
@property (readonly, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) NSString *guid;
@property (readonly, nonatomic) NSString *roomname;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *lastAddressedLocalHandle;
@property (readonly, nonatomic) NSString *accountLogin;
@property (readonly, nonatomic) NSString *groupID;
@property (readonly, nonatomic) NSString *engramID;
@property (readonly, nonatomic) NSString *originalGroupID;

+ (void)enumerateAllChatsWithBlock:(id /* block */)a0;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithChatRecord:(struct _IMDChatRecordStruct { } *)a0;
- (void)enumerateAllAttachmentsWithBlock:(id /* block */)a0;
- (void)enumerateAllMessagesWithBlock:(id /* block */)a0;
- (void)enumerateAllAssetIdentifiersWithBlock:(id /* block */)a0 historyLimit:(double)a1 assetsMapping:(id)a2;
- (id)allMessageGUIDs;

@end
