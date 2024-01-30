@class NSString, NSArray, EMObjectID, EMMailDropMetadata;

@interface _EMAttachmentContentItem : EMObject <EFPubliclyDescribable, EMMutableContentItem, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *availableRepresentations;
@property (nonatomic) BOOL isAvailableLocally;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *contentID;
@property (copy, nonatomic) NSString *UTType;
@property (nonatomic) BOOL isSinglePagePDF;
@property (nonatomic) long long dataTransferByteCount;
@property (nonatomic) long long storageByteCount;
@property (copy, nonatomic) EMMailDropMetadata *mailDropMetadata;
@property (nonatomic) int exchangeEventUID;
@property (copy, nonatomic) id /* block */ loaderBlock;
@property (readonly, copy, nonatomic) EMObjectID *objectID;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)requestRepresentationWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (id)requestRepresentationWithOptions:(id)a0 delegate:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)_isSinglePagePDFWithContentURL:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
