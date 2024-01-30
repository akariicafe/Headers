@class NSString, NSArray, NSURL, NSDate;

@interface EDSearchableIndexAttachmentItemMetadatum : NSObject <EDSearchableIndexAttachmentItemMetadatumBuilder>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *domainIdentifier;
@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSArray *mailboxIdentifiers;
@property (copy, nonatomic) NSString *senderAddress;
@property (copy, nonatomic) NSArray *recipientAddresses;
@property (retain, nonatomic) NSDate *dateReceived;
@property (retain, nonatomic) NSDate *dateSent;
@property (readonly, nonatomic) NSURL *attachmentFileURL;
@property (readonly, nonatomic) BOOL canReadAttachmentFile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithAttachmentFileURL:(id)a0 builder:(id /* block */)a1;

@end
