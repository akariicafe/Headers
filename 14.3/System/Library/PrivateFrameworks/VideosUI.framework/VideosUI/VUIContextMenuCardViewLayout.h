@class TVImageLayout, VUITextLayout;

@interface VUIContextMenuCardViewLayout : TVViewLayout

@property (retain, nonatomic) VUITextLayout *titleTextViewLayout;
@property (retain, nonatomic) VUITextLayout *subTitleTextViewLayout;
@property (retain, nonatomic) TVImageLayout *coverImageViewLayout;
@property (retain, nonatomic) TVImageLayout *badgeImageViewLayout;

+ (id)layoutWithLayout:(id)a0 element:(id)a1;

- (id)init;
- (void).cxx_destruct;

@end
