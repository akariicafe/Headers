@class NSString, NSHashTable;

@interface SXTextSelectionManager : NSObject <SXTextSelectionManager>

@property (readonly, nonatomic) NSHashTable *textSelecting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
