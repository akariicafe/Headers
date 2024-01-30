@class NSString, NSMutableDictionary, CLLocation, NSObject;
@protocol OS_dispatch_queue;

@interface SSVLoadNearbyAppsOperation : NSOperation {
    NSString *_baseURLString;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableDictionary *_parameters;
    id /* block */ _responseBlock;
    NSString *_storeFrontSuffix;
    NSString *_userAgent;
}

@property (readonly) CLLocation *location;
@property (copy) NSString *pointOfInterestIdentifier;
@property (copy) NSString *pointOfInterestProviderIdentifier;
@property (copy) NSString *pointOfInterestProviderURL;
@property (copy) id /* block */ responseBlock;
@property (copy) NSString *storeFrontSuffix;
@property (copy) NSString *userAgent;

- (void).cxx_destruct;
- (void)main;
- (id)_storeFrontSuffix;
- (id)_lookupWithRequest:(id)a0 error:(id *)a1;
- (id)initWithBaseURL:(id)a0 location:(id)a1;

@end
