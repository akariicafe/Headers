@class NSArray, UIColor;

@interface SUPageSectionGroup : NSObject <NSCopying>

@property (nonatomic) long long defaultSectionIndex;
@property (retain, nonatomic) NSArray *sections;
@property (nonatomic) long long style;
@property (retain, nonatomic) UIColor *tintColor;
@property (nonatomic) long long tintStyle;

- (BOOL)isEqual:(id)a0;
- (BOOL)loadFromDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithSectionsDictionary:(id)a0;
- (long long)_sectionStyleForString:(id)a0;

@end
