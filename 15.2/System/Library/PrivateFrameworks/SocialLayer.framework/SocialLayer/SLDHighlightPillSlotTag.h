@class NSNumber, NSArray, SLPerson;

@interface SLDHighlightPillSlotTag : SLDPillSlotTag <NSCopying, NSCoding>

@property (nonatomic) double maxWidth;
@property (retain, nonatomic) NSNumber *widthNumber;
@property (nonatomic) NSNumber *allSendersNumber;
@property (retain, nonatomic) NSArray *sendersToDisplay;
@property (retain, nonatomic) SLPerson *pinnedSender;
@property (retain, nonatomic) SLPerson *meSender;
@property (nonatomic) unsigned long long variant;
@property (readonly, nonatomic) unsigned long long allSendersCount;
@property (readonly, nonatomic) unsigned long long maxPossibleImageCount;

+ (id)tagForHighlightAttributions:(id)a0 maxWidth:(double)a1 maxSendersToDisplay:(unsigned long long)a2 variant:(unsigned long long)a3;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithHighlightAttributions:(id)a0 maxWidth:(double)a1 maxSendersToDisplay:(unsigned long long)a2 variant:(unsigned long long)a3;
- (void)_generateSendersWithDisplayPolicyForAttributions:(id)a0 maxSendersToDisplay:(unsigned long long)a1;

@end
