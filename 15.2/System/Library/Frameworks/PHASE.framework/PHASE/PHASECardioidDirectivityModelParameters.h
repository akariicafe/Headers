@class NSArray, NSMutableArray;

@interface PHASECardioidDirectivityModelParameters : PHASEDirectivityModelParameters {
    NSMutableArray *_internalArray;
}

@property (readonly, nonatomic) NSMutableArray *subbands;
@property (readonly, nonatomic) NSArray *subbandParameters;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSubbandParameters:(id)a0;
- (id)subbandParameters;
- (id)subbands;

@end
