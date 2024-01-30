@class NSMutableSet;

@interface PLHighlightHierarchy : NSObject

@property (readonly, nonatomic) NSMutableSet *moments;
@property (readonly, nonatomic) NSMutableSet *dayHighlights;
@property (readonly, nonatomic) NSMutableSet *dayGroupHighlights;

- (void)addDayGroupHighlight:(id)a0;
- (void)addDayHighlight:(id)a0;
- (void)addMoment:(id)a0;
- (void)_addMoment:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_addDayHighlight:(id)a0;

@end
