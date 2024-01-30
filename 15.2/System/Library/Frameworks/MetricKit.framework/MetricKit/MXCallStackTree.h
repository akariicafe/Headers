@class NSArray;

@interface MXCallStackTree : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSArray *callStackThreads;
@property (readonly) BOOL callStackPerThread;

- (id)JSONRepresentation;
- (id)toDictionary;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithThreadArray:(id)a0 aggregatedByProcess:(BOOL)a1;

@end
