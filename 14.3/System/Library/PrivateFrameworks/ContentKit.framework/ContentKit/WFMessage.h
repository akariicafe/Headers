@class NSString, NSArray;

@interface WFMessage : NSObject <NSCopying, NSSecureCoding, WFNaming>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *content;
@property (readonly, copy, nonatomic) NSString *conversationID;
@property (readonly, copy, nonatomic) NSArray *recipientContactIDs;
@property (readonly, copy, nonatomic) NSArray *recipients;
@property (readonly, copy, nonatomic) NSString *senderContactID;
@property (readonly, copy, nonatomic) NSArray *senderHandles;
@property (readonly, copy, nonatomic) NSString *wfName;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithContent:(id)a0 conversationID:(id)a1 recipientContactIDs:(id)a2 recipients:(id)a3 senderContactID:(id)a4 senderHandles:(id)a5;

@end
