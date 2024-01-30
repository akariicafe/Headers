@class NSString, NSArray;

@interface SPUIContactViewController : SPUIViewController

@property (retain, nonatomic) NSString *contactIdentifier;
@property (readonly, nonatomic) NSArray *preferredBundleIdentifiers;

- (void)willUpdateFromResultsWithHighlightedResult:(id)a0;
- (void).cxx_destruct;
- (void)updateWithContactIdentifier:(id)a0 preferredBundleIdentifiers:(id)a1;

@end
