@class NSString, NSArray;

@interface SAAudioAppPredictorResult : NSObject {
    void /* unknown type, empty encoding */ requestId;
    void /* unknown type, empty encoding */ selectedBundleIdentifier;
    void /* unknown type, empty encoding */ disambiguateBundleIdentifiers;
}

@property (nonatomic, readonly) NSString *requestId;
@property (nonatomic, readonly) NSString *selectedBundleIdentifier;
@property (nonatomic, readonly) NSArray *disambiguateBundleIdentifiers;

- (id)init;
- (void).cxx_destruct;
- (id)initWithRequestId:(id)a0 selectedBundleIdentifier:(id)a1 disambiguateBundleIdentifiers:(id)a2;

@end
