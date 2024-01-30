@class NSString, NSArray;

@interface PXSearchRecentSearch : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *searchText;
@property (readonly, nonatomic) NSArray *representedObjects;

+ (id)new;
+ (BOOL)_isSupportedRepresentedObjects:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)dictionaryForArchiving;
- (id)initWithRepresentedObjects:(id)a0 searchText:(id)a1;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
