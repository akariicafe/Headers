@class NSArray, NSString, NSSet, NSOrderedSet, RESectionDescriptor;

@interface REHistoricSectionDescriptor : NSObject <REHistoricSectionDescriptorProperties, NSCopying> {
    NSOrderedSet *_rules;
}

@property (retain, nonatomic) NSArray *orderedRules;
@property (weak, nonatomic) RESectionDescriptor *parentDescriptor;
@property (readonly, nonatomic) NSString *name;
@property (nonatomic) BOOL invertsRanking;
@property (nonatomic) long long maxElementCount;
@property (copy, nonatomic) NSSet *rules;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
