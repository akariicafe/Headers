@class NSNumber, NSUUID;

@interface SHSheetAirdropTransferContext : NSObject

@property (readonly, nonatomic) double progress;
@property (readonly, nonatomic) NSNumber *topTextSlot;
@property (readonly, nonatomic) NSNumber *bottomTextSlot;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) BOOL shouldPulse;
@property (readonly, nonatomic) BOOL animated;

- (id)description;
- (void).cxx_destruct;
- (id)initWithProgress:(double)a0 withTopTextSlot:(id)a1 bottomTextSlot:(id)a2 forNodeWithIdentifier:(id)a3 shouldPulse:(BOOL)a4 animated:(BOOL)a5;

@end
