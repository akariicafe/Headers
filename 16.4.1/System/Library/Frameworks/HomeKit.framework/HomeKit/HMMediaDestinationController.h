@class NSUUID, _HMContext, NSArray, NSString;
@protocol HMMediaDestination, HMMediaDestinationControllerDelegate, HMMediaDestinationControllerDataSource;

@interface HMMediaDestinationController : NSObject <HMFLogging, HMObjectMerge, HMFObject> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (weak) id<HMMediaDestinationControllerDataSource> dataSource;
@property (retain) _HMContext *context;
@property (copy) NSUUID *destinationIdentifier;
@property unsigned long long supportedOptions;
@property (copy) NSArray *availableDestinationIdentifiers;
@property (retain) NSString *lastNotifiedDestinationIdentifier;
@property (weak) id<HMMediaDestinationControllerDelegate> delegate;
@property (readonly) NSUUID *identifier;
@property (readonly, copy) NSArray *availableDestinations;
@property (readonly) id<HMMediaDestination> destination;
@property (readonly) BOOL supportsSameRoomB620Destinations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;

+ (id)shortDescription;
+ (id)logCategory;

- (id)logIdentifier;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)_mergeWithNewObject:(id)a0;
- (void)_notifyDidUpdateDestination;
- (BOOL)availableDestinationIdentifiersIsEqualToIdentifiers:(id)a0;
- (void)callCompletionHandler:(id /* block */)a0;
- (void)callCompletionHandler:(id /* block */)a0 error:(id)a1;
- (void)configureLastNotifiedDestinationIdentifier;
- (void)configureWithContext:(id)a0 dataSource:(id)a1;
- (id)initWithControllerData:(id)a0;
- (id)initWithIdentifier:(id)a0 destinationIdentifier:(id)a1 supportedOptions:(unsigned long long)a2 availableDestinationIdentifiers:(id)a3;
- (void)mergeSupportedOptionsWithNewController:(id)a0;
- (void)notifyDidUpdateAvailableDestinations;
- (void)notifyDidUpdateDestination;
- (void)unconfigure;
- (void)updateDestination:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateDestination:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;

@end
