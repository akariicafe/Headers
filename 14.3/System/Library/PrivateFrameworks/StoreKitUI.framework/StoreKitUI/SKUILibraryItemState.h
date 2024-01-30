@class NSString, NSNumber;

@interface SKUILibraryItemState : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *itemStateVariantIdentifier;
@property (nonatomic) long long availability;
@property (nonatomic) unsigned long long AVTypes;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *bundleVersion;
@property (nonatomic, getter=isHighDefinition) BOOL highDefinition;
@property (nonatomic, getter=isPreview) BOOL preview;
@property (nonatomic, getter=isRental) BOOL rental;
@property (copy, nonatomic) NSNumber *storeAccountIdentifier;
@property (copy, nonatomic) NSString *storeFlavorIdentifier;
@property (copy, nonatomic) NSString *storePlatformKind;
@property (copy, nonatomic) NSNumber *storeVersionIdentifier;

- (id)initWithApplication:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)newJavaScriptRepresentation;

@end
