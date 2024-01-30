@class NSString, MANodeFilter;

@interface PGGraphHighlightTypeNode : PGGraphPropertylessNode <PGAssetCollectionFeature> {
    NSString *_label;
}

@property (class, readonly, nonatomic) MANodeFilter *tripTypeNodeFilter;
@property (class, readonly, nonatomic) MANodeFilter *concludedTripTypeNodeFilter;
@property (class, readonly, nonatomic) MANodeFilter *longTripTypeNodeFilter;
@property (class, readonly, nonatomic) MANodeFilter *shortTripTypeNodeFilter;
@property (class, readonly, nonatomic) MANodeFilter *aggregationTypeNodeFilter;
@property (class, readonly, nonatomic) MANodeFilter *onGoingTripTypeNodeFilter;
@property (class, readonly, nonatomic) MANodeFilter *defaultTypeNodeFilter;

@property (readonly, nonatomic) unsigned long long featureType;
@property (readonly, nonatomic) NSString *featureIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)filter;
+ (id)typeNodeFilterForLabel:(id)a0;

- (id)initWithLabel:(id)a0;
- (id)label;
- (void).cxx_destruct;
- (unsigned short)domain;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2 properties:(id)a3;

@end
