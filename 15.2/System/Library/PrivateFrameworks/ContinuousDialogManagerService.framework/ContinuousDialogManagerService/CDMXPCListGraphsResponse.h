@class NSOrderedSet, NSString, NSError;

@interface CDMXPCListGraphsResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSOrderedSet *availableServiceGraphs;
@property (readonly, nonatomic) NSString *activeGraphName;
@property (readonly, nonatomic) NSError *error;

- (id)initWithError:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithGraphs:(id)a0 activeGraphName:(id)a1;

@end
