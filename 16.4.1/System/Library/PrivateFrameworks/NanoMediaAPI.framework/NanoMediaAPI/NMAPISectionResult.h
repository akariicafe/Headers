@class NSString, NSDictionary, NSArray;

@interface NMAPISectionResult : NSObject

@property (readonly, nonatomic) NSString *sectionIdentifier;
@property (readonly, nonatomic) NSDictionary *sectionDictionary;
@property (readonly, nonatomic) NSArray *itemsArray;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithSectionIdentifier:(id)a0 sectionDictionary:(id)a1 itemsArray:(id)a2;

@end
