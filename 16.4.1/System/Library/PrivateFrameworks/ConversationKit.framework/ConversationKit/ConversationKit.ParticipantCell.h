@class NSString;

@interface ConversationKit.ParticipantCell : UICollectionViewCell {
    void /* unknown type, empty encoding */ participantIdentifier;
    void /* unknown type, empty encoding */ accessibilityDisplayName;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ participantView;
@property (nonatomic, copy) NSString *accessibilityDisplayName;

- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
