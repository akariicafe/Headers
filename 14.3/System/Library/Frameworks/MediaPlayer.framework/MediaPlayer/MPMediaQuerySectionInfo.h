@class NSArray;

@interface MPMediaQuerySectionInfo : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSArray *_sectionIndexTitles;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *sectionIndexTitles;
@property (readonly, copy, nonatomic) NSArray *sections;
@property (nonatomic) BOOL hasUnknownSection;
@property (readonly, nonatomic) unsigned long long count;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)indexOfSectionForSectionIndexTitleAtIndex:(unsigned long long)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
