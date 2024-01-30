@class NSString, NSArray;

@interface RWIProtocolDOMAccessibilityProperties : RWIProtocolJSONObject

@property (nonatomic) BOOL exists;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) int nodeId;
@property (copy, nonatomic) NSString *role;
@property (nonatomic) int activeDescendantNodeId;
@property (nonatomic) BOOL busy;
@property (nonatomic) long long checked;
@property (copy, nonatomic) NSArray *childNodeIds;
@property (copy, nonatomic) NSArray *controlledNodeIds;
@property (nonatomic) long long current;
@property (nonatomic) BOOL disabled;
@property (nonatomic) double headingLevel;
@property (nonatomic) double hierarchyLevel;
@property (nonatomic) BOOL isPopUpButton;
@property (nonatomic) BOOL expanded;
@property (copy, nonatomic) NSArray *flowedNodeIds;
@property (nonatomic) BOOL focused;
@property (nonatomic) BOOL ignored;
@property (nonatomic) BOOL ignoredByDefault;
@property (nonatomic) long long invalid;
@property (nonatomic) BOOL hidden;
@property (nonatomic) BOOL liveRegionAtomic;
@property (copy, nonatomic) NSArray *liveRegionRelevant;
@property (nonatomic) long long liveRegionStatus;
@property (nonatomic) int mouseEventNodeId;
@property (copy, nonatomic) NSArray *ownedNodeIds;
@property (nonatomic) int parentNodeId;
@property (nonatomic) BOOL pressed;
@property (nonatomic) BOOL readonly;
@property (nonatomic) BOOL required;
@property (nonatomic) BOOL selected;
@property (copy, nonatomic) NSArray *selectedChildNodeIds;

- (id)initWithExists:(BOOL)a0 label:(id)a1 nodeId:(int)a2 role:(id)a3;

@end
