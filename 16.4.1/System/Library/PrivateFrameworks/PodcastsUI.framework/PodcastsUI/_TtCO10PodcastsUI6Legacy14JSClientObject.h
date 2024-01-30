@class NSString;

@interface _TtCO10PodcastsUI6Legacy14JSClientObject : NSObject <PodcastsUI.JSClientExport> {
    void /* unknown type, empty encoding */ accountStore;
}

@property (nonatomic, readonly) NSString *buildType;
@property (nonatomic, readonly) NSString *deviceType;
@property (nonatomic, readonly) NSString *guid;
@property (nonatomic, readonly) NSString *storefrontIdentifier;

- (id)init;
- (void).cxx_destruct;
- (id)analyticsIdentifiers;
- (id)getDefaultForKeyName:(id)a0;
- (void)setDefaultForKeyName:(id)a0 :(id)a1;

@end
