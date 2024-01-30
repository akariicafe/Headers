@class NSString;

@interface UIRuntimeConnection : NSObject <NSCoding>

@property (retain, nonatomic) id source;
@property (retain, nonatomic) id destination;
@property (copy, nonatomic) NSString *label;

- (void)connect;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)connectForSimulator;

@end
