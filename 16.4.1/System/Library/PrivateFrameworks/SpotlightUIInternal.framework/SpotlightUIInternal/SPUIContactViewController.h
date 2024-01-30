@class NSString, NSArray;

@interface SPUIContactViewController : SPUIViewController

@property (retain, nonatomic) NSString *contactIdentifier;
@property (readonly, nonatomic) NSArray *preferredBundleIdentifiers;

- (void)updateWithContactIdentifier:(id)a0 preferredBundleIdentifiers:(id)a1;
- (void)willUpdateFromResultsWithHighlightedResult:(id)a0 viewController:(id)a1;
- (void).cxx_destruct;

@end
