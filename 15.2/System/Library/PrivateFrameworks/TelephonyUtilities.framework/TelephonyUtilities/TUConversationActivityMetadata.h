@class NSString, NSData, TUSandboxExtendedURL, TUConversationActivityContext, NSURL;

@interface TUConversationActivityMetadata : NSObject <TUSanitizedCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) TUSandboxExtendedURL *imageFileURL;
@property (readonly, copy, nonatomic) TUConversationActivityContext *context;
@property (copy, nonatomic) NSData *linkMetadatablob;
@property (readonly, copy, nonatomic) NSURL *fallbackURL;
@property (readonly, copy, nonatomic) NSURL *invitationURL;
@property (nonatomic) BOOL supportsContinuationOnTV;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSData *imageData;
@property (nonatomic) long long preferredBroadcastingAttributes;
@property (readonly) unsigned long long length;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activityMetadataWithDataBlob:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)sanitizedCopy;
- (id)serializedData;
- (BOOL)isEquivalentToActivityMetadata:(id)a0;
- (id)sanitizedCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithContext:(id)a0 linkMetadata:(id)a1 fallbackURL:(id)a2 invitationURL:(id)a3 supportsContinuationOnTV:(BOOL)a4 title:(id)a5 subTitle:(id)a6 imageData:(id)a7 preferredBroadcastingAttributes:(long long)a8;
- (id)_imagePreviewDirectoryPath;
- (BOOL)_createImageFolderIfNeeded;
- (id)_filePathForImage;
- (BOOL)_isEqualToActivityMetadata:(id)a0;
- (id)initWithContext:(id)a0 linkMetadata:(id)a1 fallbackURL:(id)a2 invitationURL:(id)a3 supportsContinuationOnTV:(BOOL)a4 title:(id)a5 subTitle:(id)a6 imageData:(id)a7;
- (void)removeImageDiskFile;

@end
