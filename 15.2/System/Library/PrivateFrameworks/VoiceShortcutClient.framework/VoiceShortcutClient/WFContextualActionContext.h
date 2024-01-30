@class NSArray;

@interface WFContextualActionContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *historicalActionIdentifiers;
@property (nonatomic) unsigned long long surface;
@property (retain, nonatomic) NSArray *files;
@property (nonatomic) BOOL allowsExpensiveFetch;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithSurface:(unsigned long long)a0;

@end
