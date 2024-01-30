@class NSString, RTXPCActivityCriteria;

@interface RTXPCActivityRegistrant : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) RTXPCActivityCriteria *criteria;
@property (readonly, copy, nonatomic) id /* block */ handler;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)initWithIdentifier:(id)a0 criteria:(id)a1 handler:(id /* block */)a2;

@end
