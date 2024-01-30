@class NSArray, NSData, WebResource, WebArchivePrivate;

@interface WebArchive : NSObject <NSCoding, NSCopying> {
    WebArchivePrivate *_private;
}

@property (readonly, nonatomic) WebResource *mainResource;
@property (readonly, copy, nonatomic) NSArray *subresources;
@property (readonly, copy, nonatomic) NSArray *subframeArchives;
@property (readonly, copy, nonatomic) NSData *data;

- (id)initWithData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)init;
- (id)initWithMainResource:(id)a0 subresources:(id)a1 subframeArchives:(id)a2;
- (void *)_coreLegacyWebArchive;
- (id)_initWithCoreLegacyWebArchive:(void *)a0;

@end
