@class NSString, NSArray;

@interface MCKeyValueSection : NSObject

@property (retain, nonatomic) NSString *sectionTitle;
@property (retain, nonatomic) NSString *sectionFooter;
@property (retain, nonatomic) NSArray *sectionKeyValues;

+ (id)sectionWithKeyValues:(id)a0;
+ (id)sectionWithLocalizedArray:(id)a0 title:(id)a1 footer:(id)a2;

- (void).cxx_destruct;
- (id)initWithSectionTitle:(id)a0 footer:(id)a1 keyValues:(id)a2;

@end
