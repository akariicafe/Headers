@class NSString, NSUUID, NSArray, CPImageSet;
@protocol CPSBannerItemDelegate;

@interface CPSBannerItem : NSObject

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSUUID *identifier;
@property (weak, nonatomic) id<CPSBannerItemDelegate> delegate;
@property (readonly, nonatomic) NSArray *textVariants;
@property (readonly, nonatomic) NSArray *detailTextVariants;
@property (readonly, nonatomic) NSArray *attributedDetailTextVariants;
@property (readonly, nonatomic) CPImageSet *imageSet;

- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToBannerItem:(id)a0;
- (id)initWithIdentifier:(id)a0 bundleIdentifier:(id)a1 textVariants:(id)a2 detailTextVariants:(id)a3 attributedDetailTextVariants:(id)a4 imageSet:(id)a5 delegate:(id)a6;

@end
