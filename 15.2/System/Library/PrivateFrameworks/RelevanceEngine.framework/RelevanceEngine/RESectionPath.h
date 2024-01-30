@class NSString;

@interface RESectionPath : NSObject <NSCopying> {
    NSString *_sectionName;
}

@property (readonly, copy, nonatomic) NSString *sectionName;
@property (nonatomic) unsigned long long element;

+ (id)sectionPathWithSectionName:(id)a0 element:(unsigned long long)a1;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSectionName:(id)a0 element:(unsigned long long)a1;
- (unsigned long long)hash;

@end
