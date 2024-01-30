@class NSArray, NSString, CSPerson;

@interface SGTextMessage : SGMessage

@property (retain) CSPerson *sender;
@property (retain) NSArray *recipients;
@property (retain) NSString *conversationIdentifier;
@property (retain) NSString *nickname;
@property (retain) NSString *photoPath;
@property (readonly) BOOL senderIsAccountOwner;
@property (readonly) BOOL senderIsBusinessChat;
@property (readonly) NSString *attachmentFilename;

+ (BOOL)isSent:(id)a0;
+ (id)_nicknameCustomKey;
+ (id)_photoPathCustomKey;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSearchableItem:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)author;
- (id)spotlightBundleIdentifier;
- (id)spotlightDomainIdentifier;

@end
