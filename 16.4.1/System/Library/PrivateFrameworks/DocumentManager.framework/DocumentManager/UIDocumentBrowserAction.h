@class NSString, UIDocumentBrowserActionDescriptor, NSPredicate, UIImage, NSArray;

@interface UIDocumentBrowserAction : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *localizedTitle;
@property (nonatomic) long long availability;
@property (nonatomic) BOOL requiresResolvedItems;
@property (copy, nonatomic) id /* block */ handler;
@property (copy, nonatomic) id /* block */ resolvedHandler;
@property (copy, nonatomic) id /* block */ unresolvedHandler;
@property (copy, nonatomic) NSString *uiActionProviderIdentifier;
@property (nonatomic) long long style;
@property (nonatomic) long long navigationSide;
@property (nonatomic) BOOL requiresVersioning;
@property (nonatomic) unsigned long long menuSortOrder;
@property (retain, nonatomic) NSPredicate *filteringPredicate;
@property (nonatomic) BOOL performActionExitsEditMode;
@property (nonatomic) long long actionStyle;
@property (retain, nonatomic) UIDocumentBrowserActionDescriptor *uiActionDescriptor;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSArray *supportedContentTypes;
@property (nonatomic) BOOL supportsMultipleItems;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)commonInit;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 localizedTitle:(id)a1 availability:(long long)a2 handler:(id /* block */)a3;
- (id)initWithIdentifier:(id)a0 localizedTitle:(id)a1 resolvedHandler:(id /* block */)a2;
- (id)initWithIdentifier:(id)a0 localizedTitle:(id)a1 unresolvedHandler:(id /* block */)a2;
- (id)initWithUIActionDescriptor:(id)a0;

@end
