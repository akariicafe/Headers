@class NSString, NSArray, NSSet;

@interface ATXInformationHeuristicResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *heuristicName;
@property (readonly, nonatomic) NSArray *suggestions;
@property (readonly, nonatomic) NSSet *refreshTriggers;
@property (readonly, nonatomic) BOOL hasFailed;

- (id)_safeDecodeObjectOfClasses:(id)a0 forKey:(id)a1 withCoder:(id)a2 nonNull:(BOOL)a3;
- (id)_safeDecodeObjectOfClass:(Class)a0 forKey:(id)a1 withCoder:(id)a2 nonNull:(BOOL)a3;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithHeuristicName:(id)a0 suggestions:(id)a1 refreshTriggers:(id)a2 hasFailed:(BOOL)a3;
- (void).cxx_destruct;

@end
