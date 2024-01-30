@class QLCacheBasicFileIdentifier;

@interface QLCacheBasicVersionedFileIdentifier : QLCacheVersionedFileIdentifier <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) QLCacheBasicFileIdentifier *fileIdentifier;


- (id)initWithFileIdentifier:(id)a0 version:(id)a1;
- (id)initWithThumbnailRequest:(id)a0;

@end
