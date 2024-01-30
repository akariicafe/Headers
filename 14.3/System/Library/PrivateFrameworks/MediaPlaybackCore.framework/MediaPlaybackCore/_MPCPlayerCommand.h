@class MPCPlayerResponse, MPCPlayerPath;

@interface _MPCPlayerCommand : NSObject

@property (readonly, nonatomic) MPCPlayerResponse *response;
@property (readonly, copy, nonatomic) MPCPlayerPath *playerPath;

- (id)initWithPlayerPath:(id)a0;
- (void).cxx_destruct;
- (id)initWithResponse:(id)a0;

@end
