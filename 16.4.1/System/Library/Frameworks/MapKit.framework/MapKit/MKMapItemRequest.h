@class MKMapFeatureAnnotation;
@protocol MKMapServiceTicket;

@interface MKMapItemRequest : NSObject {
    id<MKMapServiceTicket> _ticket;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    BOOL _loading;
    BOOL _cancelled;
}

@property (readonly, nonatomic) MKMapFeatureAnnotation *featureAnnotation;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic, getter=isLoading) BOOL loading;

- (void)cancel;
- (void).cxx_destruct;
- (void)_handleMapItems:(id)a0 error:(id)a1 completionHandler:(id /* block */)a2;
- (void)_performLookupRequestWithMapItemIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)getMapItemWithCompletionHandler:(id /* block */)a0;
- (id)initWithMapFeatureAnnotation:(id)a0;

@end
