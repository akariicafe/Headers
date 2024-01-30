@class NSError, NSData;

@interface PFLCompletionContext : NSObject

@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSData *privatizedDiffs;

- (void).cxx_destruct;
- (id)initWithPrivatizedDiffs:(id)a0 error:(id)a1;

@end
