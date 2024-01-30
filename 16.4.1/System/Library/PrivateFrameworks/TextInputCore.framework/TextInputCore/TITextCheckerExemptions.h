@interface TITextCheckerExemptions : NSObject {
    BOOL _assertsObservers;
}

@property (nonatomic) BOOL assertsObservers;

- (BOOL)stringIsExemptFromChecker:(id)a0;
- (void)dealloc;

@end
