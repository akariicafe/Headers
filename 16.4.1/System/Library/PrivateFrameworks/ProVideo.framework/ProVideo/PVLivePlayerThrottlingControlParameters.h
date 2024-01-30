@class NSNumber;

@interface PVLivePlayerThrottlingControlParameters : NSObject <NSCopying>

@property (retain, nonatomic) NSNumber *renderLinkRate;
@property (retain, nonatomic) NSNumber *playerQueueSize;
@property (retain, nonatomic) NSNumber *playerBypassRenderLink;

+ (id)CreateControllerParameters:(id)a0 :(id)a1 :(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)updateNilsFrom:(id)a0;
- (BOOL)hasNilParameter;

@end
