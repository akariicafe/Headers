@class GKLabel, NSString;

@interface GKRemoteUIHeaderView : UIView <RUIHeader>

@property (nonatomic) BOOL isFirstSection;
@property (retain, nonatomic) GKLabel *textLabel;
@property (nonatomic) double height;
@property (nonatomic) double bottomMargin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
