@class NSSet;

@interface CHSearchQueryItem : NSObject

@property (readonly, copy, nonatomic) NSSet *strokeIdentifiers;

- (void)dealloc;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithStrokeIdentifiers:(id)a0;
- (BOOL)isEqualToSearchQueryItem:(id)a0;

@end
