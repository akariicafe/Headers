@class NSSet;

@interface CHSearchQueryItem : NSObject

@property (readonly, copy, nonatomic) NSSet *strokeIdentifiers;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithStrokeIdentifiers:(id)a0;
- (BOOL)isEqualToSearchQueryItem:(id)a0;

@end
