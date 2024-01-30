@class UIColor, NSString, UIImage, EKGroupInfo, EKCalendar;

@interface EKCalendarInfo : NSObject {
    NSString *_title;
}

@property (retain, nonatomic) EKCalendar *calendar;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) BOOL selected;
@property (weak, nonatomic) EKGroupInfo *group;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) int displayOrder;
@property (readonly, nonatomic) BOOL isSubscribed;
@property (readonly, nonatomic) BOOL isShared;
@property (readonly, nonatomic) BOOL isPublished;
@property (readonly, nonatomic) BOOL isEditable;
@property (nonatomic) BOOL isEnabled;
@property (readonly, nonatomic) BOOL excludeFromSelectAll;
@property (nonatomic) unsigned long long customGroupType;
@property (readonly, nonatomic) UIImage *icon;
@property (readonly, nonatomic) UIImage *highlightedIcon;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCalendar:(id)a0;
- (void)_updateCustomGroupType;

@end
