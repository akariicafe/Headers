@class NSArray;

@interface SFLateSectionsAppendedFeedback : SFFeedback <NSCopying>

@property (copy, nonatomic) NSArray *sections;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSections:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
