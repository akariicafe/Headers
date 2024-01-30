@class NSString, UIImageView, UILabel, CLKDevice;

@interface NTKAlbumEmptyView : UIView {
    CLKDevice *_device;
    UIImageView *_iconImageView;
    UILabel *_headerLabel;
    UILabel *_bodyLabel;
}

@property (retain, nonatomic) NSString *headerLabelText;
@property (retain, nonatomic) NSString *bodyLabelText;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initForDevice:(id)a0;

@end
