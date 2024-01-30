@class NSURL, SLHighlight;
@protocol NSSecureCoding, NSCopying;

@interface SWHighlight : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic, setter=_setSLHighlight:) SLHighlight *slHighlight;
@property (readonly, copy, nonatomic) id<NSSecureCoding, NSCopying> identifier;
@property (readonly, copy, nonatomic) NSURL *URL;

+ (unsigned char)highlightContentTypeForType:(unsigned char)a0;
+ (id)highlightsForSLHighlights:(id)a0;
+ (id)requiredSpotlightAttributeKeys;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)attributions;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)timestamp;
- (void).cxx_destruct;
- (id)stringIdentifier;
- (id)hideContextMenu;
- (BOOL)isLocalResource;
- (id)initWithCSSearchableItem:(id)a0 error:(id *)a1;
- (id)initWithCSSearchableItemUniqueIdentifier:(id)a0 error:(id *)a1;
- (id)initWithCSSearchableItemUniqueIdentifier:(id)a0 forType:(unsigned char)a1 error:(id *)a2;
- (id)initWithSLHighlight:(id)a0;
- (BOOL)isSyndicatableMedia;
- (id)livePhotoComplementURL;
- (id)replyContextMenuWithPresentingViewController:(id)a0;
- (id)resourceUTI;

@end
