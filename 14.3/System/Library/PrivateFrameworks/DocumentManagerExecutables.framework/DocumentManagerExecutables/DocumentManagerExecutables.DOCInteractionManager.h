@interface DocumentManagerExecutables.DOCInteractionManager : NSObject

@property (nonatomic, retain) void /* unknown type, empty encoding */ lastOpenedItem;
@property (nonatomic, retain) void /* unknown type, empty encoding */ lastSelectedItem;

+ (id)sharedManagerFor:(id)a0;
+ (void)clearSharedControllerFor:(id)a0;
+ (void)setSharedManagerWith:(id)a0 to:(id)a1;

- (id)init;
- (void).cxx_destruct;

@end
