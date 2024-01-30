@class NSString;

@interface _UIBarInsertLayoutData : NSObject <NSCopying> {
    BOOL _collapsible;
    BOOL _prefersExpanded;
    BOOL _ignoredForCollapsingBehaviors;
    BOOL _active;
    NSString *_identifier;
    double _minimumHeight;
    double _preferredHeight;
    double _bottomInsetForTransitionProgress;
    double _assignedHeight;
    double _collapsingHeight;
    long long _priority;
    long long _order;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
