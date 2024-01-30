@class NSString, UIColor;

@interface PKMentionParticipant : NSObject

@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) UIColor *color;

+ (id)mentionWithDisplayName:(id)a0 identifier:(id)a1 color:(id)a2;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDisplayName:(id)a0 identifier:(id)a1 color:(id)a2;

@end
