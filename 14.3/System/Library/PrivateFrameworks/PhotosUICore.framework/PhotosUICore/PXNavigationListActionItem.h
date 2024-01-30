@class NSString;

@interface PXNavigationListActionItem : PXNavigationListItem {
    NSString *_glyphImageName;
    long long _style;
}

@property (readonly, nonatomic) NSString *actionIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)style;
- (BOOL)isEqualToNavigationListItem:(id)a0;
- (id)titleForActionIdentifier:(id)a0;
- (id)glyphImageName;
- (unsigned long long)hash;
- (id)representedObject;
- (id)initWithActionType:(id)a0;

@end
