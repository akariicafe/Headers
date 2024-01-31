@class NSUUID, CPListTemplate, NSString, UIImage, CPImageSet;

@interface CPListItem : NSObject <CPListItemPrivate, NSSecureCoding, CPSelectableListItem>

@property (class, readonly, nonatomic) struct CGSize { double x0; double x1; } maximumImageSize;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CPImageSet *imageSet;
@property (retain, nonatomic) CPImageSet *accessoryImageSet;
@property (readonly, nonatomic) NSUUID *identifier;
@property (weak, nonatomic) CPListTemplate *listTemplate;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) long long accessoryType;
@property (nonatomic, getter=isExplicitContent) BOOL explicitContent;
@property (nonatomic) double playbackProgress;
@property (nonatomic, getter=isPlaying) BOOL playing;
@property (nonatomic) long long playingIndicatorLocation;
@property (copy, nonatomic) id /* block */ handler;
@property (readonly, copy, nonatomic) NSString *text;
@property (retain, nonatomic) id userInfo;
@property (readonly, copy, nonatomic) NSString *detailText;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) UIImage *accessoryImage;
@property (readonly, nonatomic) BOOL showsDisclosureIndicator;
@property (nonatomic) BOOL showsExplicitLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void)_setNeedsUpdate;
- (void)setText:(id)a0;
- (void).cxx_destruct;
- (void)setImage:(id)a0;
- (void)setDetailText:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setAccessoryImage:(id)a0;
- (void)setShowsDisclosureIndicator:(BOOL)a0;
- (id)initWithText:(id)a0 detailText:(id)a1;
- (id)initWithText:(id)a0 detailText:(id)a1 image:(id)a2 accessoryImage:(id)a3 accessoryType:(long long)a4;
- (id)initWithText:(id)a0 detailText:(id)a1 image:(id)a2;
- (id)initWithText:(id)a0 detailText:(id)a1 image:(id)a2 showsDisclosureIndicator:(BOOL)a3;

@end
