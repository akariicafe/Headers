@class NSString, NSMutableArray, NSMapTable;
@protocol UIFocusItem;

@interface UIFocusRingClientState : NSObject

@property (weak, nonatomic) id<UIFocusItem> currentFocusItem;
@property (retain, nonatomic) NSMutableArray *activeFocusLayers;
@property (retain, nonatomic) NSMapTable *activeFocusLayersToItems;
@property (retain, nonatomic) NSString *clientID;

- (id)initWithClientID:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
