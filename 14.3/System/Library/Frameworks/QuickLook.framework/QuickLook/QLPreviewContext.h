@class UIColor, NSString, QLItem, NSDictionary, NSNumber;
@protocol QLItemThumbnailGeneratorProtocolInternal;

@interface QLPreviewContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) id<QLItemThumbnailGeneratorProtocolInternal> thumbnailGenerator;
@property (retain) NSString *previewTitle;
@property (retain) NSString *contentType;
@property BOOL canBeEdited;
@property BOOL canBeShared;
@property unsigned long long editedFileBehavior;
@property unsigned long long previewItemType;
@property (retain) UIColor *backgroundColor;
@property (retain) NSNumber *itemSize;
@property long long processIdentifier;
@property (retain) QLItem *item;
@property (retain) NSDictionary *clientPreviewOptions;
@property (copy) NSString *password;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
