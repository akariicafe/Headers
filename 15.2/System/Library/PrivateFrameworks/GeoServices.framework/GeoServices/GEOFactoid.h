@class NSString, GEOMapItemIdentifier, GEOPDFactoid;

@interface GEOFactoid : NSObject <GEOFactoid> {
    GEOPDFactoid *_factoid;
}

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) double value;
@property (readonly, nonatomic) NSString *unstructuredValue;
@property (readonly, nonatomic) int semantic;
@property (readonly, nonatomic) int unitType;
@property (readonly, nonatomic, getter=shouldUseStructuredData) BOOL useStructuredData;
@property (readonly, nonatomic) NSString *symbolName;
@property (readonly, nonatomic) GEOMapItemIdentifier *placeIdentifier;
@property (readonly, nonatomic) BOOL canBeDisplayedInPlaceSummary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithFactoid:(id)a0;

@end
