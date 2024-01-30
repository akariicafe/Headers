@class NSNumber;

@interface PVLivePlayerThrottlingControlParameters : NSObject <NSCopying>

@property (retain, nonatomic) NSNumber *renderLinkRate;
@property (retain, nonatomic) NSNumber *playerQueueSize;
@property (retain, nonatomic) NSNumber *playerBypassRenderLink;

+ (id)CreateControllerParameters:(id)a0 :(id)a1 :(id)a2;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)hasNilParameter;
- (void)updateNilsFrom:(id)a0;

@end
