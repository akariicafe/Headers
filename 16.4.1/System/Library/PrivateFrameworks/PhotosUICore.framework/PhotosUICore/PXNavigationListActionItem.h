@class NSString;

@interface PXNavigationListActionItem : PXNavigationListItem {
    NSString *_glyphImageName;
    long long _style;
}

@property (readonly, nonatomic) NSString *actionType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (long long)style;
- (void).cxx_destruct;
- (id)representedObject;
- (id)initWithActionType:(id)a0;
- (id)glyphImageName;
- (BOOL)isEqualToNavigationListItem:(id)a0;

@end
