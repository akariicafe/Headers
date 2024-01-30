@class NSUUID, NSString, NSDictionary;

@interface UISUIActivityExtensionItemDataRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *activityUUID;
@property (retain, nonatomic) NSString *activityType;
@property (nonatomic) struct CGSize { double width; double height; } thumbnailSize;
@property (nonatomic) NSString *extensionIdentifier;
@property (nonatomic) BOOL isAirDropActivity;
@property (nonatomic) long long maxPreviews;
@property (nonatomic) long long activityCategory;
@property (nonatomic) BOOL wantsThumbnailItemData;
@property (nonatomic) BOOL wantsAttachmentURLItemData;
@property (nonatomic) BOOL activitySupportsPromiseURLs;
@property (retain, nonatomic) NSDictionary *activitySpecificMetadata;
@property (nonatomic) BOOL sourceAppIsManaged;
@property (readonly, nonatomic) Class classForPreparingExtensionItemData;

+ (id)requestForActivity:(id)a0 activityType:(id)a1 activitySpecificMetadata:(id)a2;
+ (id)requestForActivity:(id)a0 activityType:(id)a1 sourceAppIsManaged:(BOOL)a2;
+ (id)requestForActivity:(id)a0 activityType:(id)a1;

- (id)_initWithClassForPreparingExtensionItemData:(Class)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
