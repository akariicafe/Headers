@class NSString, NSArray;

@interface PXContentFilterGroup : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSArray *filterIdentifiers;

+ (id)groupWithName:(id)a0 filterIdentifiers:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithName:(id)a0 filterIdentifiers:(id)a1;

@end
