@class TPUIState;

@interface TPArchivedUIState : TSPObject

@property (copy, nonatomic) TPUIState *uiState;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)initWithContext:(id)a0 uiState:(id)a1;
- (BOOL)isEqualToArchivedUIState:(id)a0;

@end
