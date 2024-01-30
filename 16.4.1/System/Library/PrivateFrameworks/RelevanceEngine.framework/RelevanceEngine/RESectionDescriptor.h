@class NSArray, NSString, NSSet, NSOrderedSet, REHistoricSectionDescriptor;

@interface RESectionDescriptor : NSObject <REAutomaticExportedInterface, NSCopying> {
    NSOrderedSet *_rules;
}

@property (retain, nonatomic) NSArray *orderedRules;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) REHistoricSectionDescriptor *historicSectionDescriptor;
@property (nonatomic) long long maxElementCount;
@property (copy, nonatomic) NSSet *rules;

+ (id)defaultSectionDescriptorForIdentifier:(id)a0;
+ (id)defaultUpNextSectionDescriptorForIdentifier:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
