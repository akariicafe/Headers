@class NSArray, NSDictionary;

@interface MapsSuggestionsMeCard : NSObject <NSCopying> {
    NSDictionary *_perCNPostalAddress;
}

@property (readonly, nonatomic) NSArray *shortcutsForHome;
@property (readonly, nonatomic) NSArray *shortcutsForWork;
@property (readonly, nonatomic) NSArray *shortcutsForSchool;
@property (readonly, nonatomic) NSArray *hiddenShortcutsForHome;
@property (readonly, nonatomic) NSArray *hiddenShortcutsForWork;
@property (readonly, nonatomic) NSArray *hiddenShortcutsForSchool;
@property (readonly, nonatomic) NSArray *shortcutsForAll;
@property (readonly, nonatomic) NSArray *shortcutsForAllIncludingHidden;
@property (readonly, nonatomic) NSArray *mapItemsForHome;
@property (readonly, nonatomic) NSArray *mapItemsForWork;
@property (readonly, nonatomic) NSArray *mapItemsForSchool;
@property (readonly, nonatomic) NSArray *mapItemsForAll;
@property (readonly, nonatomic) BOOL hasCorrected;
@property (readonly, nonatomic) BOOL hasGeocoded;
@property (readonly, nonatomic) BOOL hasHomeOrWork;
@property (readonly, nonatomic) BOOL hasHomeOrWorkOrSchool;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithShortcuts:(id)a0 hasCorrected:(BOOL)a1 hasGeocoded:(BOOL)a2;
- (id)initWithShortcuts:(id)a0 perCNPostalAddress:(id)a1 hasCorrected:(BOOL)a2 hasGeocoded:(BOOL)a3;
- (BOOL)isEqualToMeCard:(id)a0;
- (id)shortcutForCNPostalAddressIdentifier:(id)a0;
- (id)shortcutsPerCNPostalAddress;

@end
