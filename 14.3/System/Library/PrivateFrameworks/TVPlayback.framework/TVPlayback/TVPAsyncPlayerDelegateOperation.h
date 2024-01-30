@class NSNumber;

@interface TVPAsyncPlayerDelegateOperation : NSObject

@property (readonly, nonatomic) NSNumber *identifier;
@property (copy, nonatomic) id /* block */ block;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
