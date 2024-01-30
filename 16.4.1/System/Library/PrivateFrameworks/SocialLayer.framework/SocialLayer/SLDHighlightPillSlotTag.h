@class NSArray, SLPerson, NSString, NSURL, NSNumber;

@interface SLDHighlightPillSlotTag : SLDSlotTag <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double maxWidth;
@property (retain, nonatomic) NSNumber *widthNumber;
@property (nonatomic) NSNumber *allSendersNumber;
@property (retain, nonatomic) NSArray *sendersToDisplay;
@property (retain, nonatomic) SLPerson *pinnedSender;
@property (retain, nonatomic) SLPerson *meSender;
@property (nonatomic) unsigned long long variant;
@property (retain, nonatomic) NSString *groupID;
@property (retain, nonatomic) NSURL *groupPhotoPath;
@property (retain, nonatomic) NSString *groupName;
@property (readonly, nonatomic) unsigned long long allSendersCount;
@property (readonly, nonatomic) unsigned long long maxPossibleImageCount;

+ (id)tagForHighlightAttributions:(id)a0 maxWidth:(double)a1 maxSendersToDisplay:(unsigned long long)a2 variant:(unsigned long long)a3;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)resolvedStyleForStyle:(id)a0;
- (id)_personOtherThanPerson:(id)a0 inArray:(id)a1;
- (void)_generateCollaborationSendersForMultipleAttributions:(id)a0 maxSendersToDisplay:(unsigned long long)a1;
- (void)_generateCollaborationSendersForSingleAttribution:(id)a0 maxSendersToDisplay:(unsigned long long)a1;
- (void)_generateSendersWithDisplayPolicyForAttributions:(id)a0 maxSendersToDisplay:(unsigned long long)a1;
- (id)initWithHighlightAttributions:(id)a0 maxWidth:(double)a1 maxSendersToDisplay:(unsigned long long)a2 variant:(unsigned long long)a3;

@end
