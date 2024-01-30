@class NSArray;

@interface SBAppSwitcherDefaults : SBAbstractSpringBoardDefaultDomain

@property (retain, nonatomic) NSArray *recentsPlistRepresentation;
@property (nonatomic) BOOL chamoisWindowingEnabled;
@property (nonatomic) BOOL chamoisHideStrips;
@property (nonatomic) BOOL chamoisHideDock;
@property (nonatomic) BOOL chamoisEverEnabled;
@property (nonatomic) BOOL chamoisHideStripsExternal;
@property (nonatomic) BOOL chamoisHideDockExternal;
@property (nonatomic) unsigned long long bottomEdgeGestureSwipeCount;
@property (readonly, nonatomic, getter=isSpringBoardKillable) BOOL springBoardKillable;
@property (readonly, nonatomic, getter=areTrackpadSwitcherGesturesEnabled) BOOL trackpadSwitcherGesturesEnabled;
@property (nonatomic) BOOL shouldShowSplitPeekEducation;
@property (nonatomic) BOOL shouldShowSlideOverPeekEducation;
@property (readonly, nonatomic) NSArray *legacyRecentApplications;
@property (readonly, nonatomic) NSArray *legacyRecentDisplayItems;
@property (readonly, nonatomic) NSArray *legacyRecentDisplayItemRoles;

@end
