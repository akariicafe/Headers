@class NSArray;

@interface TSSharingActivityProvider : NSObject <TSSharingActivityProviderType> {
    void /* unknown type, empty encoding */ activityItemSources;
    void /* unknown type, empty encoding */ activities;
    void /* unknown type, empty encoding */ excludedActivityTypes;
    void /* unknown type, empty encoding */ linkPresentationSource;
}

@property (nonatomic, copy) NSArray *activityItemSources;
@property (nonatomic, copy) NSArray *activities;
@property (nonatomic, copy) NSArray *excludedActivityTypes;
@property (nonatomic, copy) id linkPresentationSource;
@property (nonatomic, readonly) NSArray *activityItems;

- (void).cxx_destruct;
- (id)init;
- (id)initWithActivityItems:(id)a0 activitySources:(id)a1 excludedActivityTypes:(id)a2 linkPresentationSource:(id)a3;

@end
