@class NSString, GEOPDTemplatePlaceModuleConfiguration;

@interface GEORelatedPlaceModuleConfiguration : NSObject {
    GEOPDTemplatePlaceModuleConfiguration *_relatedPlaceConfig;
}

@property (readonly, nonatomic) NSString *sectionTitle;
@property (readonly, nonatomic) unsigned long long numberOfRows;
@property (readonly, nonatomic) int componentIdentifier;
@property (readonly, nonatomic) int layoutVariant;
@property (readonly, nonatomic, getter=isVertical) BOOL vertical;

- (id)description;
- (id)initWithPlaceTemplateModuleConfiguration:(id)a0;
- (void).cxx_destruct;

@end
