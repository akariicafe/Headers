@class NSString, CHSAvocadoDescriptor;

@interface ATXHomeScreenWidgetDescriptor : NSObject <NSSecureCoding, NSCopying, ATXDefaultHomeScreenItem>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *appBundleId;
@property (copy, nonatomic) CHSAvocadoDescriptor *avocadoDescriptor;
@property (nonatomic) unsigned long long suggestedSize;
@property (nonatomic) long long rankType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)extensionBundleId;
- (void)encodeWithCoder:(id)a0;
- (id)compactDescription;
- (id)widgetKind;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;

@end
