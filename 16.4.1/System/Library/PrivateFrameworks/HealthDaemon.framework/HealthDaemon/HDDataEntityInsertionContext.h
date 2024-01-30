@class HDDataOriginProvenance, HDProfile;

@interface HDDataEntityInsertionContext : NSObject {
    HDProfile *_profile;
    double _defaultCreationDate;
}

@property (readonly, nonatomic) HDDataOriginProvenance *provenance;
@property (readonly, nonatomic) double creationDate;
@property (readonly, nonatomic) BOOL skipInsertionFilter;
@property (readonly, nonatomic) BOOL resolveAssociations;

- (void).cxx_destruct;
- (id)initWithProvenance:(id)a0 creationDate:(double)a1 skipInsertionFilter:(BOOL)a2 resolveAssociations:(BOOL)a3 profile:(id)a4;
- (void)prepareObjectForInsertion:(id)a0;

@end
