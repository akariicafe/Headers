@class NSString;

@interface _CTSplicedFontKey : NSObject <NSCopying> {
    unsigned long long _hash;
}

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *language;
@property (nonatomic) double lineHeightRatio;
@property (nonatomic) long long legibilityWeight;
@property (nonatomic) BOOL ignoreLegibilityWeight;
@property (nonatomic) unsigned long long sizeCategory;
@property (retain, nonatomic) NSString *design;
@property (nonatomic) double weight;
@property (nonatomic) double width;
@property (nonatomic) unsigned int grade;
@property (nonatomic) unsigned int platform;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
