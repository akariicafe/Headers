@class NSString, NSArray, AXDialectMap;

@interface AXLangMap : NSObject

@property (nonatomic, getter=isWestern) BOOL western;
@property (nonatomic, getter=isRTL) BOOL rtl;
@property (nonatomic, getter=isAmbiguous) BOOL ambiguous;
@property (copy, nonatomic) NSString *generalLanguageID;
@property (retain, nonatomic) NSArray *alternateLanguageIDs;
@property (retain, nonatomic) NSArray *dialects;
@property (retain, nonatomic) NSArray *associatedAmbiguousLanguages;
@property (readonly, nonatomic) AXDialectMap *defaultDialect;
@property (readonly, nonatomic) AXDialectMap *userLocaleDialect;
@property (weak, nonatomic) AXDialectMap *userPreferredDialect;

- (void).cxx_destruct;
- (id)basicDescription;
- (id)initWithLanguageID:(id)a0 isWestern:(BOOL)a1 isAmbiguous:(BOOL)a2 isRTL:(BOOL)a3 dialects:(id)a4 alternateLanguageIDs:(id)a5 associatedAmbiguousLanguages:(id)a6;
- (id)dialectWithLocaleIdentifier:(id)a0;
- (id)description;
- (id)debugDescription;

@end
