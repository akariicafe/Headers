@class NSArray, MPModelKind, MPMediaLibrary, NSString;

@interface MPMediaLibraryEntityTranslationContext : NSObject

@property (retain, nonatomic) MPMediaLibrary *mediaLibrary;
@property (retain, nonatomic) NSArray *allowedEntityIdentifiers;
@property (retain, nonatomic) NSArray *scopedContainers;
@property (nonatomic, getter=isMultiQuery) BOOL multiQuery;
@property (nonatomic) unsigned long long filteringOptions;
@property (retain, nonatomic) MPModelKind *modelKind;
@property (retain, nonatomic) NSString *personID;
@property (retain, nonatomic) NSString *filterText;

- (void).cxx_destruct;

@end
