@class NSDictionary, NSString;

@interface ICRDNoteSectionIdentifier : NSObject <ICRDSectionIdentifier, NSCopying>

@property (class, readonly, nonatomic) NSDictionary *titles;

@property (nonatomic) long long sectionType;
@property (readonly, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *expansionStateContext;

+ (id)sortDescriptors;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToICRDNoteSectionIdentifier:(id)a0;
- (id)initWithNoteSectionType:(long long)a0;

@end
