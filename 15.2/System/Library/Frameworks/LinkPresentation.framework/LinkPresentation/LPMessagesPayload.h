@class LPLinkMetadata;

@interface LPMessagesPayload : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) LPLinkMetadata *metadata;
@property (nonatomic, getter=isPlaceholder) BOOL placeholder;
@property (nonatomic) BOOL needsSubresourceFetch;
@property (nonatomic) BOOL needsCompleteFetch;

+ (id)_linkWithDataRepresentation:(id)a0 substitutingAttachments:(BOOL)a1 attachments:(id)a2;
+ (id)linkWithDataRepresentation:(id)a0 attachments:(id)a1;
+ (id)linkWithDataRepresentationWithoutSubstitutingAttachments:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)_needsWorkaroundForAppStoreTransformerCrash;
- (void)performSubstitutionWithAttachments:(id)a0;
- (id)dataRepresentationWithOutOfLineAttachments:(id *)a0;

@end
