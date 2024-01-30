@class NSString, NSArray;

@interface PLRevGeoCompoundNameInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *namePrefix;
@property (readonly, copy, nonatomic) NSString *nameSuffix;
@property (readonly, copy, nonatomic) NSArray *sortedNames;
@property (readonly, nonatomic) BOOL isContinuation;
@property (readonly, nonatomic) BOOL suffixWhenPrefixOnly;

+ (id)_localizedNameForName:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithNamePrefix:(id)a0 nameSuffix:(id)a1 sortedNames:(id)a2 isContinuation:(BOOL)a3 suffixWhenPrefixOnly:(BOOL)a4;
- (id)localizedSortedNames;
- (id)localizedTitleForNameInfo;

@end
