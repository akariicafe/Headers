@class NSArray, NSString;

@interface _MPCPlayerShuffleCommand : _MPCPlayerCommand <MPCPlayerShuffleCommand>

@property (nonatomic) long long currentShuffleType;
@property (retain, nonatomic) NSArray *supportedShuffleTypes;
@property (nonatomic) BOOL supportsChangeShuffle;
@property (nonatomic) BOOL supportsAdvanceShuffle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)advance;
- (id)setShuffleType:(long long)a0;
- (void).cxx_destruct;

@end
