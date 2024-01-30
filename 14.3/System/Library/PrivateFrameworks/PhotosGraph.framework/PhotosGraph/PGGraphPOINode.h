@class NSString, NSArray;

@interface PGGraphPOINode : PGGraphPropertylessNode <PGGraphPortraitTopic, PGGraphLocalizable, PGGraphSynonymSupport> {
    NSString *_label;
}

@property (readonly, nonatomic) NSString *pg_topic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *localizedSynonyms;

+ (id)_localizationKeyForPOINode:(id)a0;
+ (id)validPOILabels;

- (void).cxx_destruct;
- (unsigned short)domain;
- (id)initWithLabel:(id)a0;
- (id)label;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2;

@end
