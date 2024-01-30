@interface WLAutomation : NSObject {
    BOOL _hasTestAutomationCaches;
}

- (void)deleteTestAutomationCachesIfNeeded;
- (void)writeCodeForTestAutomationIfNeeded:(id)a0;

@end
