@class MPPropertySet, MPSectionedCollection, MPModelRequest;

@interface MPModelResponse : NSObject

@property (retain, nonatomic) MPPropertySet *deferredSectionProperties;
@property (retain, nonatomic) MPPropertySet *deferredItemProperties;
@property (copy, nonatomic) MPSectionedCollection *results;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, copy, nonatomic) MPModelRequest *request;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

- (id)initWithRequest:(id)a0;
- (id)debugDescription;
- (id)init;
- (id)description;
- (void)_invalidate;
- (void).cxx_destruct;
- (void)getChangeDetailsFromPreviousResponse:(id)a0 completion:(id /* block */)a1;

@end
