@class NSString, UIView;

@interface _TVMLGridView : _TVGridView <TVRowHosting_Collection>

@property (nonatomic) BOOL configureForListTemplate;
@property (retain, nonatomic) UIView *headerView;
@property (readonly, nonatomic) BOOL shouldBindRowsTogether;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
