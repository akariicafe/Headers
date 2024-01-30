@class NSString, NSArray;

@interface PXSearchRecentSearch : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *searchText;
@property (readonly, nonatomic) NSArray *representedObjects;

+ (id)new;
+ (BOOL)_isSupportedRepresentedObjects:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryForArchiving;
- (id)initWithRepresentedObjects:(id)a0 searchText:(id)a1;

@end
