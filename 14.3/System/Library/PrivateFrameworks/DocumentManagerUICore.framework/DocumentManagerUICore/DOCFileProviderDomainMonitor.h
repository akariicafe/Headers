@class NSOrderedSet, NSMutableDictionary;

@interface DOCFileProviderDomainMonitor : NSObject {
    id _providerDomainMonitoringContext;
    NSMutableDictionary *_providerNames;
    NSOrderedSet *_monitoredIdentifiers;
    id /* block */ _monitorCallback;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)notifyIfNecessary;
- (void)monitorProviderDomainNamesForSourceIdentifiers:(id)a0 callback:(id /* block */)a1;

@end
