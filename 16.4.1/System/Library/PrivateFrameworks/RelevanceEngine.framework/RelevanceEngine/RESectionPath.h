@class NSString;

@interface RESectionPath : NSObject <NSCopying> {
    NSString *_sectionName;
}

@property (readonly, copy, nonatomic) NSString *sectionName;
@property (nonatomic) unsigned long long element;

+ (id)sectionPathWithSectionName:(id)a0 element:(unsigned long long)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithSectionName:(id)a0 element:(unsigned long long)a1;

@end
