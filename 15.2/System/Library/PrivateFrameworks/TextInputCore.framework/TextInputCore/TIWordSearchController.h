@class NSMapTable;

@interface TIWordSearchController : NSObject

@property (retain, nonatomic) NSMapTable *inputModeToWordSearchMapping;

+ (id)sharedWordSearchController;

- (void).cxx_destruct;
- (id)init;
- (void)setWordSearch:(id)a0 forInputMode:(id)a1;
- (id)wordSearchForInputMode:(id)a0;

@end
