@class NSURL, NSString;

@interface AAEndpoint : NSObject <AAEndpointType> {
    void /* unknown type, empty encoding */ url;
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ sharedContainerIdentifier;
}

@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *sharedContainerIdentifier;

- (id)init;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 name:(id)a1 sharedContainerIdentifier:(id)a2;

@end
