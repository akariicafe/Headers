@class NSString, NSDictionary, NSArray;

@interface NMAPISectionResult : NSObject

@property (readonly, nonatomic) NSString *sectionIdentifier;
@property (readonly, nonatomic) NSDictionary *sectionDictionary;
@property (readonly, nonatomic) NSArray *itemsArray;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSectionIdentifier:(id)a0 sectionDictionary:(id)a1 itemsArray:(id)a2;

@end
