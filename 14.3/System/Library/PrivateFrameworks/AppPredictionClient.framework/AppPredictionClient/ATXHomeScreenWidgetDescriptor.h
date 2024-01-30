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
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)widgetKind;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;

@end
