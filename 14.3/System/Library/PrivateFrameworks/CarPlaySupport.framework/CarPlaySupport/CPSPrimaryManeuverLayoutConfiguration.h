@class NSString, NSAttributedString, UIImage;

@interface CPSPrimaryManeuverLayoutConfiguration : NSObject

@property (nonatomic) unsigned long long layout;
@property (retain, nonatomic) NSString *instruction;
@property (retain, nonatomic) NSAttributedString *attributedInstruction;
@property (nonatomic) double height;
@property (retain, nonatomic) UIImage *symbolImage;
@property (retain, nonatomic) UIImage *junctionImage;

- (void).cxx_destruct;
- (BOOL)isEqualToConfiguration:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)_layoutString;

@end
