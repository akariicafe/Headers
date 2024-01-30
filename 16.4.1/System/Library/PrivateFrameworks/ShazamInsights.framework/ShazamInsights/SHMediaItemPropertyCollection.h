@class NSSet, NSString;

@interface SHMediaItemPropertyCollection : NSObject

@property (readonly, nonatomic) NSSet *collection;
@property (readonly, nonatomic) NSString *property;

+ (id)collectionWithArray:(id)a0 representingProperty:(id)a1;

- (void).cxx_destruct;
- (id)initWithArray:(id)a0 representingProperty:(id)a1;

@end
