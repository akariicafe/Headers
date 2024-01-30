@class LPLinkMetadata;

@interface LPSharingMetadataWrapper : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) LPLinkMetadata *metadata;
@property (nonatomic) BOOL hasFetchedSubresources;
@property (nonatomic) BOOL hasCompletedFetch;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)dataRepresentation;
- (void)encodeWithCoder:(id)a0;

@end
