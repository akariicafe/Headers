@class UIMenuElement, NSArray;

@interface MKPlaceCardMenuBuildingOptions : NSObject

@property (retain, nonatomic) UIMenuElement *headerMenuElement;
@property (readonly, copy, nonatomic) NSArray *requestedActionTypes;
@property (nonatomic) BOOL addMismatchedItems;

- (id)initWithRequestedActionTypes:(id)a0;
- (void).cxx_destruct;

@end
