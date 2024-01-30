@class NSString, NSArray, NSDictionary, BMNamedHandle, NSData, BMPBMailContentEvent;

@interface BMMailContentEvent : NSObject <BMIdentifiableContentEvent, BMCommunicationsAccountContentEvent, BMStoreData, NSSecureCoding, BMProtoBufWrapper, BMStreamValidating> {
    NSData *_data;
    BMPBMailContentEvent *_proto;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _protoLock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *uniqueId;
@property (readonly, nonatomic) NSString *domainId;
@property (readonly, nonatomic) double absoluteTimestamp;
@property (readonly, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) NSString *messageIdentifier;
@property (readonly, nonatomic) BMNamedHandle *fromHandle;
@property (readonly, nonatomic) NSArray *toHandles;
@property (readonly, nonatomic) NSArray *ccHandles;
@property (readonly, nonatomic) NSArray *bccHandles;
@property (readonly, nonatomic) NSDictionary *headers;
@property (readonly, nonatomic) NSString *subject;
@property (readonly, nonatomic) NSData *htmlContent;
@property (readonly, nonatomic) NSString *textContent;
@property (readonly, nonatomic) BOOL isFullyDownloaded;
@property (readonly, nonatomic) NSString *securityMethod;
@property (readonly, nonatomic) NSArray *accountHandles;
@property (readonly, nonatomic) BMNamedHandle *replyTo;
@property (readonly, nonatomic) NSArray *mailboxIdentifiers;
@property (readonly, nonatomic) BMNamedHandle *listId;
@property (readonly, nonatomic) NSString *accountType;
@property (readonly, nonatomic) NSArray *attachments;
@property (readonly, nonatomic) NSString *contentProtection;
@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithProto:(id)a0;
- (id)json;
- (void)encodeWithCoder:(id)a0;
- (id)encodeAsProto;
- (id)jsonDict;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)initWithProtoData:(id)a0;
- (BOOL)isValidWithContext:(id)a0 error:(id *)a1;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (BOOL)isCompleteWithContext:(id)a0 error:(id *)a1;
- (id)serialize;
- (void).cxx_destruct;
- (void)_inflateFromProto:(id)a0;
- (id)_initWithUniqueId:(id)a0 domainId:(id)a1;
- (void)_loadData;
- (id)initWithUniqueId:(id)a0 domainId:(id)a1 absoluteTimestamp:(double)a2 accountIdentifier:(id)a3 messageIdentifier:(id)a4 fromHandle:(id)a5 toHandles:(id)a6 ccHandles:(id)a7 bccHandles:(id)a8 headers:(id)a9 subject:(id)a10 htmlContent:(id)a11 textContent:(id)a12 isFullyDownloaded:(BOOL)a13 securityMethod:(id)a14 accountHandles:(id)a15 replyTo:(id)a16 mailboxIdentifiers:(id)a17 listId:(id)a18 accountType:(id)a19 attachments:(id)a20;
- (id)initWithUniqueId:(id)a0 domainId:(id)a1 absoluteTimestamp:(double)a2 accountIdentifier:(id)a3 messageIdentifier:(id)a4 fromHandle:(id)a5 toHandles:(id)a6 ccHandles:(id)a7 bccHandles:(id)a8 headers:(id)a9 subject:(id)a10 htmlContent:(id)a11 textContent:(id)a12 isFullyDownloaded:(BOOL)a13 securityMethod:(id)a14 accountHandles:(id)a15 replyTo:(id)a16 mailboxIdentifiers:(id)a17 listId:(id)a18 accountType:(id)a19 attachments:(id)a20 contentProtection:(id)a21;

@end
