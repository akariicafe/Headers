@class NSURL, NSString;

@interface GKMessageInboxEntryInternal : GKInternalRepresentation

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSString *senderAlias;
@property (retain, nonatomic) NSString *senderHandle;
@property (retain, nonatomic) NSString *contactID;
@property (retain, nonatomic) NSString *contactName;
@property (retain, nonatomic) NSString *friendCode;
@property (readonly, nonatomic) NSString *senderDisplayName;

+ (BOOL)supportsSecureCoding;
+ (id)secureCodedPropertyKeys;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
