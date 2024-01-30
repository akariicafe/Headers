@class NSArray;

@interface MXCallStackTree : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSArray *callStackThreads;
@property (readonly) BOOL callStackPerThread;

- (id)toDictionary;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)JSONRepresentation;
- (id)initWithThreadArray:(id)a0 aggregatedByProcess:(BOOL)a1;
- (void)encodeWithCoder:(id)a0;

@end
