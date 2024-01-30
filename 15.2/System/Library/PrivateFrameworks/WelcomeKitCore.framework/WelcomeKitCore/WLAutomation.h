@interface WLAutomation : NSObject {
    BOOL _hasTestAutomationCaches;
}

- (void)writeCodeForTestAutomationIfNeeded:(id)a0;
- (void)deleteTestAutomationCachesIfNeeded;

@end
