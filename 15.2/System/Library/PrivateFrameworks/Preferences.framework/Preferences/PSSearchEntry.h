@class NSString, PSSpecifierAction, NSURL, NSArray, PSSpecifier, NSMutableSet, NSMutableArray;

@interface PSSearchEntry : NSObject {
    NSString *_name;
    NSURL *_url;
    NSString *_identifier;
    BOOL _isSection;
    BOOL _hasDetailController;
    BOOL _hasListController;
    NSArray *_additionalDetailTextComponents;
}

@property (readonly, nonatomic) PSSpecifier *specifier;
@property (retain, nonatomic) PSSpecifier *groupSpecifier;
@property (weak, nonatomic) PSSearchEntry *parentEntry;
@property (readonly, nonatomic) NSMutableSet *childEntries;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, copy, nonatomic) NSString *sectionIdentifier;
@property (readonly, nonatomic) BOOL isRootURL;
@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) NSString *plistName;
@property (copy, nonatomic) NSString *bundleName;
@property (copy, nonatomic) NSString *manifestBundleName;
@property (readonly, nonatomic) NSMutableArray *keywords;
@property (retain, nonatomic) PSSpecifierAction *action;

+ (id)schemeNameOverride;
+ (void)setSchemeNameOverride:(id)a0;

- (id)recursiveDescription;
- (BOOL)_specifier:(id)a0 hasDetailController:(BOOL)a1;
- (BOOL)hasFinishedIndexing;
- (id)_prefsURLIsRoot:(BOOL *)a0;
- (BOOL)hasDetailController;
- (id)hierarchyDescription;
- (id)recursiveDescriptionForLevel:(unsigned long long)a0;
- (id)description;
- (id)rootEntry;
- (BOOL)isRootUrl;
- (void).cxx_destruct;
- (BOOL)isSectionEntry;
- (id)sectionEntry;
- (BOOL)isRootEntry;
- (BOOL)hasListController;
- (BOOL)finishIndexing;
- (id)ancestorEntries;
- (id)initWithSpecifier:(id)a0 parent:(id)a1;
- (id)debugDescription;
- (id)detailTextWithEffectiveTitle:(id *)a0;

@end
