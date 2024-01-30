@class NSString, NSArray, AXSSDialectMap;

@interface AXSSLanguageMap : NSObject

@property (nonatomic, getter=isWestern) BOOL western;
@property (nonatomic, getter=isRTL) BOOL rtl;
@property (nonatomic, getter=isAmbiguous) BOOL ambiguous;
@property (copy, nonatomic) NSString *generalLanguageID;
@property (retain, nonatomic) NSArray *alternateLanguageIDs;
@property (retain, nonatomic) NSArray *dialects;
@property (retain, nonatomic) NSArray *associatedAmbiguousLanguages;
@property (retain, nonatomic) AXSSDialectMap *defaultDialect;
@property (retain, nonatomic) AXSSDialectMap *userLocaleDialect;

- (id)description;
- (id)initWithLanguageID:(id)a0 isWestern:(BOOL)a1 isAmbiguous:(BOOL)a2 isRTL:(BOOL)a3 dialects:(id)a4 alternateLanguageIDs:(id)a5 associatedAmbiguousLanguages:(id)a6;
- (id)dialectWithLocaleIdentifier:(id)a0;
- (void).cxx_destruct;

@end
