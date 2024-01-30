@class NSString, UIImageView, UILabel, CLKDevice;

@interface NTKAlbumEmptyView : UIView {
    CLKDevice *_device;
    UIImageView *_iconImageView;
    UILabel *_headerLabel;
    UILabel *_bodyLabel;
}

@property (retain, nonatomic) NSString *headerLabelText;
@property (retain, nonatomic) NSString *bodyLabelText;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)initForDevice:(id)a0;

@end
