@class NSArray;

@interface SBAppSwitcherDefaults : SBAbstractSpringBoardDefaultDomain

@property (retain, nonatomic) NSArray *recentsPlistRepresentation;
@property (nonatomic) unsigned long long bottomEdgeGestureSwipeCount;
@property (readonly, nonatomic, getter=isSpringBoardKillable) BOOL springBoardKillable;
@property (readonly, nonatomic, getter=areTrackpadSwitcherGesturesEnabled) BOOL trackpadSwitcherGesturesEnabled;
@property (readonly, nonatomic) NSArray *legacyRecentApplications;
@property (readonly, nonatomic) NSArray *legacyRecentDisplayItems;
@property (readonly, nonatomic) NSArray *legacyRecentDisplayItemRoles;

@end
