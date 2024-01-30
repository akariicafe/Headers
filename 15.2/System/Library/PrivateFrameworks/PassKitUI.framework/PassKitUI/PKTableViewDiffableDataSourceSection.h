@class NSString;

@interface PKTableViewDiffableDataSourceSection : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *footer;

- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
