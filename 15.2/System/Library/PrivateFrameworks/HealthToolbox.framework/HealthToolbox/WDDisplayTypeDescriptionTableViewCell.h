@class NSString, HKDisplayType, WDDisplayTypeDescriptionView;

@interface WDDisplayTypeDescriptionTableViewCell : UITableViewCell {
    WDDisplayTypeDescriptionView *_descriptionView;
}

@property (class, readonly) NSString *defaultReuseIdentifier;

@property (nonatomic) BOOL showAttributionText;
@property (retain, nonatomic) HKDisplayType *displayType;

+ (double)minimumHeight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)setupSubviews;
- (id)initWithCoder:(id)a0;
- (id)initWithDisplayType:(id)a0 showAttributionText:(BOOL)a1 reuseIdentifier:(id)a2;

@end
