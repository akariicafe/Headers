@class NSArray, NSDictionary, NSString;

@interface EFSearchableIndexObjectPropertyMapper : NSObject <EFObjectPropertyMapper>

@property (readonly, nonatomic) NSArray *attributes;
@property (copy, nonatomic) NSDictionary *children;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAttributes:(id)a0;
- (id)initWithChildren:(id)a0;
- (void).cxx_destruct;
- (id)childForKey:(id)a0;
- (id)initWithChildren:(id)a0 attributes:(id)a1;

@end
