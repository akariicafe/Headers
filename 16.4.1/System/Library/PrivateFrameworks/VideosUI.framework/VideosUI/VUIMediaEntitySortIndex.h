@class NSString;

@interface VUIMediaEntitySortIndex : NSObject

@property (copy, nonatomic) NSString *title;
@property (nonatomic) unsigned long long startIndex;
@property (nonatomic) unsigned long long count;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 startIndex:(unsigned long long)a1 count:(unsigned long long)a2;

@end
