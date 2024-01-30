@class NSNumber;

@interface TVPAsyncPlayerDelegateOperation : NSObject

@property (readonly, nonatomic) NSNumber *identifier;
@property (copy, nonatomic) id /* block */ block;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (unsigned long long)hash;

@end
