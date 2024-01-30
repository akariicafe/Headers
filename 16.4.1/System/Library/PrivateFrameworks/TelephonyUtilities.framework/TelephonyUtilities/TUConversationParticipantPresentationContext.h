@class NSNumber;

@interface TUConversationParticipantPresentationContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long participantIdentifier;
@property (readonly, nonatomic) unsigned long long videoQuality;
@property (readonly, nonatomic) NSNumber *visibility;
@property (readonly, nonatomic) NSNumber *prominence;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } spatialPosition;
@property (readonly, nonatomic) BOOL isInCanvas;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithParticipantIdentifier:(unsigned long long)a0 videoQuality:(unsigned long long)a1 visibility:(id)a2 prominence:(id)a3 spatialPosition:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 isInCanvas:(BOOL)a5;

@end
