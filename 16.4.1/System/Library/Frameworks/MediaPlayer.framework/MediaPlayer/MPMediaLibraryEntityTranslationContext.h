@class NSArray, MPModelKind, MPMediaLibrary, NSString;

@interface MPMediaLibraryEntityTranslationContext : NSObject <NSCopying>

@property (retain, nonatomic) MPMediaLibrary *mediaLibrary;
@property (retain, nonatomic) NSArray *allowedEntityIdentifiers;
@property (retain, nonatomic) NSArray *scopedContainers;
@property (nonatomic, getter=isMultiQuery) BOOL multiQuery;
@property (nonatomic) BOOL sortUsingAllowedEntityIdentifiers;
@property (nonatomic) unsigned long long filteringOptions;
@property (retain, nonatomic) MPModelKind *modelKind;
@property (retain, nonatomic) NSString *personID;
@property (retain, nonatomic) NSString *filterText;
@property (retain, nonatomic) NSArray *propertyFilters;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
