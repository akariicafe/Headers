@class NSString;

@interface HMAccessoryInfoMediaState : NSObject

@property (readonly, copy) NSString *mediaIdentifier;
@property (readonly) double volume;
@property (readonly) long long playbackState;
@property (readonly) long long shuffleState;
@property (readonly) long long repeatState;

- (id)initWithProtoData:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)protoData;
- (id)description;
- (void).cxx_destruct;
- (id)initWithMediaIdentifier:(id)a0 volume:(double)a1 playbackState:(long long)a2 shuffleState:(long long)a3 repeatState:(long long)a4;
- (id)initWithProtoPayload:(id)a0;
- (id)protoPayload;

@end
