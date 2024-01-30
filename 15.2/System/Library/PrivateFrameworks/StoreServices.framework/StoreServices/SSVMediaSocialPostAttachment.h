@class NSArray, NSString, NSData, NSURL, NSMutableDictionary;

@interface SSVMediaSocialPostAttachment : NSObject <NSCopying, SSXPCCoding> {
    NSMutableDictionary *_childAttachments;
}

@property (copy, nonatomic) NSArray *artists;
@property (copy, nonatomic) NSString *albumIdentifier;
@property (copy, nonatomic) NSString *attachmentDescription;
@property (copy, nonatomic) NSString *categoryName;
@property (nonatomic, getter=isExplicitContent) BOOL explicitContent;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSData *assetData;
@property (copy, nonatomic) NSURL *assetURL;
@property (readonly, nonatomic) long long attachmentType;
@property (copy, nonatomic) NSString *UTI;
@property (nonatomic) BOOL deletesAssetWhenFinished;
@property (nonatomic) double previewFrameTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)childAttachmentForRelationship:(id)a0;
- (void)enumerateChildAttachmentsUsingBlock:(id /* block */)a0;
- (void)setChildAttachment:(id)a0 forRelationship:(id)a1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
