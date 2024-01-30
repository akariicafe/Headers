@class NSString;

@interface PXNavigationListActionItem : PXNavigationListItem {
    NSString *_glyphImageName;
    long long _style;
}

@property (readonly, nonatomic) NSString *actionType;

- (long long)style;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)representedObject;
- (unsigned long long)hash;
- (id)initWithActionType:(id)a0;
- (id)glyphImageName;
- (BOOL)isEqualToNavigationListItem:(id)a0;

@end
