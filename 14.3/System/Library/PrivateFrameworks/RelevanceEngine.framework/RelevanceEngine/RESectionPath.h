@class NSString;

@interface RESectionPath : NSObject <NSCopying> {
    NSString *_sectionName;
}

@property (readonly, copy, nonatomic) NSString *sectionName;
@property (nonatomic) unsigned long long element;

+ (id)sectionPathWithSectionName:(id)a0 element:(unsigned long long)a1;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithSectionName:(id)a0 element:(unsigned long long)a1;

@end
