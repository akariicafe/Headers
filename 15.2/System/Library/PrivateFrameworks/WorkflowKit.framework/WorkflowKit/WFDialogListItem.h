@class NSString, WFImage, NSData, WFContentItem;
@protocol WFPropertyListObject;

@interface WFDialogListItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) WFImage *image;
@property (nonatomic) BOOL hideSubtitle;
@property (retain, nonatomic) WFContentItem *contentItem;
@property (readonly, nonatomic) NSData *archivedContentItem;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL selected;
@property (readonly, nonatomic) BOOL showingStaticContent;
@property (readonly, nonatomic) BOOL hasImage;
@property (readonly, nonatomic) id<WFPropertyListObject> serializedPossibleState;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)prepareForDisplayWithCompletionHandler:(id /* block */)a0;
- (id)initWithContentItem:(id)a0 selected:(BOOL)a1 serializedPossibleState:(id)a2;
- (id)initWithContentItem:(id)a0 selected:(BOOL)a1 hideSubtitle:(BOOL)a2;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 image:(id)a2 selected:(BOOL)a3 contentItem:(id)a4 hideSubtitle:(BOOL)a5 serializedPossibleState:(id)a6;
- (void)_loadContentItemWithCompletion:(id /* block */)a0;
- (BOOL)loadSubtitleWithCompletion:(id /* block */)a0;
- (BOOL)loadAltTextWithCompletion:(id /* block */)a0;
- (BOOL)loadImageWithSize:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;

@end
