@class NSString, WFImage;
@protocol WFPropertyListObject;

@interface WFDialogListItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) WFImage *image;
@property (nonatomic) BOOL hideSubtitle;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL selected;
@property (readonly, nonatomic) id<WFPropertyListObject> serializedPossibleState;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL showingStaticContent;
@property (readonly, nonatomic) BOOL hasImage;
@property (readonly, nonatomic) BOOL hasSubtitle;
@property (readonly, nonatomic) BOOL hasAltText;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 identifier:(id)a2 image:(id)a3 selected:(BOOL)a4 hideSubtitle:(BOOL)a5 serializedPossibleState:(id)a6;

@end
