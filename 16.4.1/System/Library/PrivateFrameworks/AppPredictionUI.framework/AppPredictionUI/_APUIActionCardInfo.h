@class SFPunchout, NSString, SFActionItem, SFImage;

@interface _APUIActionCardInfo : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *footnote;
@property (retain, nonatomic) NSString *bundleId;
@property (retain, nonatomic) NSString *appTitle;
@property (retain, nonatomic) SFImage *image;
@property (retain, nonatomic) SFActionItem *actionItem;
@property (retain, nonatomic) SFPunchout *actionPunchout;

- (void).cxx_destruct;

@end
