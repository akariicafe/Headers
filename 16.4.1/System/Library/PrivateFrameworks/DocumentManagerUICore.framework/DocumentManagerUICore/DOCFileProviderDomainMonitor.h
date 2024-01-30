@class NSOrderedSet, NSMutableDictionary;

@interface DOCFileProviderDomainMonitor : NSObject {
    id _providerDomainMonitoringContext;
    NSMutableDictionary *_providerNames;
    NSOrderedSet *_monitoredIdentifiers;
    id /* block */ _monitorCallback;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)monitorProviderDomainNamesForSourceIdentifiers:(id)a0 callback:(id /* block */)a1;
- (void)notifyIfNecessary;

@end
