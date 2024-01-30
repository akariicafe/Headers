@class NSString, NSArray;

@interface CoreSuggestionsUI.SGBannerContent : NSObject {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ subtitle;
    void /* unknown type, empty encoding */ images;
    void /* unknown type, empty encoding */ actionTitle;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, retain) void /* unknown type, empty encoding */ attributedSubtitle;
@property (nonatomic) void /* unknown type, empty encoding */ accessoryType;
@property (nonatomic, copy) NSArray *images;
@property (nonatomic, copy) NSString *actionTitle;
@property (nonatomic, retain) void /* unknown type, empty encoding */ suggestion;
@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic) void /* unknown type, empty encoding */ primaryActionButtonWidth;
@property (nonatomic) void /* unknown type, empty encoding */ closeButtonWidth;
@property (nonatomic) void /* unknown type, empty encoding */ actionButtonType;

- (void).cxx_destruct;
- (id)init;

@end
