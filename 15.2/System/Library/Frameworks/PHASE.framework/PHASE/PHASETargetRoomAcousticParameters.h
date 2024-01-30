@class NSArray, NSMutableArray;

@interface PHASETargetRoomAcousticParameters : NSObject {
    NSMutableArray *_internalArray;
}

@property (readonly, nonatomic) NSArray *subbandParameters;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSubbandParameters:(id)a0;
- (id)subbandParameters;

@end
